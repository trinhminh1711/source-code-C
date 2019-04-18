#include "stdafx.h"
#include "CalculatorApp.h"
#include "CalculatorDlg.h"
#include "mainchinhDlg.h"
Calculator::Action Calculator::getLastInput() const
{
	return m_actions.size() <= 0 ? Action{ ActionType::None, 0.0 } : m_actions.back();
}

void Calculator::reset()
{
	m_leftExpression.reset();
	m_leftTerm.reset();
	m_actions.clear();
}

bool Calculator::isOperation(ActionType action) const
{
	return (action == ActionType::Plus || action == ActionType::Minus ||
		action == ActionType::Multiply || action == ActionType::Divide ||
		action == ActionType::Equals);
}

bool Calculator::isTerm(ActionType action) const
{
	return (action == ActionType::Multiply || action == ActionType::Divide);
}

bool Calculator::isExpression(ActionType action) const
{
	return (action == ActionType::Plus || action == ActionType::Minus);
}

Calculator::ActionType Calculator::getLastOperation()
{
	for (auto op = m_actions.rbegin(); op != m_actions.rend(); ++op)
	{
		if (isOperation(op->actionType))
			return op->actionType;
	}
	return ActionType::None;
}

double Calculator::getCurrentResult() const
{
	
	return m_leftExpression.hasValue() ? m_leftExpression.getValue() : m_leftTerm.getValue();
}


bool Calculator::addInput(const Action & input)
{
	const Calculator::Action lastInput = getLastInput();

	if (input.actionType == ActionType::Number)
	{
		// adding a number after a number would be an error -> that entry is ignored
		if (lastInput.actionType != ActionType::Number)
			m_actions.push_back(input);
	}
	else if (isOperation(input.actionType))
	{
		if (lastInput.actionType == ActionType::Number)
		{
			ActionType lastOperation = getLastOperation();
			switch (lastOperation)
			{
			case ActionType::Plus:
				if (isExpression(input.actionType) || input.actionType == ActionType::Equals)
				{
					// "3 + 4 -", "3 + 4 ="
					m_leftExpression.add(lastInput.value);
					m_leftTerm.reset();
				}
				else if (isTerm(input.actionType))
				{
					// "3 + 4 x",
					m_leftTerm.set(lastInput.value);
				}
				break;
			case ActionType::Minus:
				if (isExpression(input.actionType) || input.actionType == ActionType::Equals)
				{
					// "3 - 4 -", "3 - 4 ="
					m_leftExpression.add(-lastInput.value);
					m_leftTerm.reset();
				}
				else if (isTerm(input.actionType))
				{
					// "3 - 4 x",
					m_leftTerm.set(-lastInput.value);
				}
				break;
			case ActionType::Multiply:
				if (isExpression(input.actionType) || input.actionType == ActionType::Equals)
				{
					// "3 x 4 +", "3 x 4 ="
					m_leftExpression.add(m_leftTerm.getValue() * lastInput.value);
					m_leftTerm.reset();
				}
				else if (isTerm(input.actionType)) // "3 x 4 x"
					m_leftTerm.multiplyBy(lastInput.value);
				break;
			case ActionType::Divide:
				if (isExpression(input.actionType) || input.actionType == ActionType::Equals)
				{
					if (lastInput.value == 0.0)
					{
						CalculatorException divByZeroException("Error: Cannot Divide By Zero",
							CalculatorException::ExceptionType::DividedByZero);
						throw divByZeroException;
					}
					else
					{
						// "3 / 4 +", "3 / 4 ="
						m_leftExpression.add(m_leftTerm.getValue() / lastInput.value);
						m_leftTerm.reset();
					}
				}
				else if (isTerm(input.actionType)) // "3 / 4 x"
					m_leftTerm.multiplyBy(1.0 / lastInput.value);
				break;
			case ActionType::Equals: // "=" is the start of a new beginnning, see (h: *)
				if (isTerm(input.actionType))
				{
					// "= 3 x "
					m_leftExpression.reset();
					m_leftTerm.set(lastInput.value);
				}
				else if (isExpression(input.actionType))
				{
					// "= 3 + "
					m_leftExpression.set(lastInput.value);
					m_leftTerm.reset();
				}
				break;
			case ActionType::None: // "None" is the start of a new beginnning, see (h: *)
				if (isTerm(input.actionType))
				{
					// "3 x "
					m_leftExpression.reset();
					m_leftTerm.set(lastInput.value);
				}
				else if (isExpression(input.actionType))
				{
					// "3 + "
					m_leftExpression.set(lastInput.value);
					m_leftTerm.reset();
				}
				break;
			}
			m_actions.push_back(input);
			return true;
		}
	}
	return false;
}