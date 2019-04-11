Public Class Form1
    Private Sub ButtonClickMethod(sender As Object, e As EventArgs) Handles Num1.Click, Num2.Click, Num3.Click, Num4.Click, Num5.Click, Num6.Click, Num7.Click, Num8.Click, Num9.Click, Num0.Click, Numdot.Click, minus.Click, mutil.Click, drive.Click, plus.Click, clear.Click, esqual.Click
        Dim button As Button = CType(sender, Button)


        If button.Name = " Num1 " Then
            TextBox1 = TextBox1.Text + "1"
        End If
        If button.Name = " Num2 " Then
            TextBox1 = TextBox1.Text + "2"
        End If
        If button.Name = " Num3 " Then
            TextBox1 = TextBox1.Text + "3"
        End If
        If button.Name = " Num4 " Then
            TextBox1 = TextBox1.Text + "4"
        End If
        If button.Name = " Num5 " Then
            TextBox1 = TextBox1.Text + "6"
        End If
        If button.Name = " Num7 " Then
            TextBox1 = TextBox1.Text + "7"
        End If
        If button.Name = " Num8 " Then
            TextBox1 = TextBox1.Text + "8"
        End If
        If button.Name = " Num9 " Then
            TextBox1 = TextBox1.Text + "9"
        End If
        If button.Name = " NumDot " Then
            TextBox1 = TextBox1.Text + "."
        End If
        If button.Name = " minus " Then
            TextBox1 = TextBox1.Text + "-"
        End If
        If button.Name = " plus " Then
            TextBox1 = TextBox1.Text + "+"
        End If
        If button.Name = " mutil " Then
            TextBox1 = TextBox1.Text + "*"
        End If
        If button.Name = " drive " Then
            TextBox1 = TextBox1.Text + "/ "
        End If
        If button.Name = " clear " Then
            TextBox1 = " "
        End If
        If button.Name = " equal " Then
            Dim equation As String = TextBox1.Text
            Dim result = New DataTable().Compute(equation, Nothing)
            TextBox.Text = result

        End If


    End Sub


End Class
