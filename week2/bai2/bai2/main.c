#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int x;
struct node
{
    int data;
    struct node *next;
};

struct node *pdau = NULL;
struct node *pcuoi= NULL;
void THEMVAODAU(int x)
{
    struct node *p;
    p = (struct node*) malloc(sizeof(struct node));
    p->data = x;
    p=pdau;
    if (pdau==NULL)
    {
        pdau = pcuoi=p;
    }
    else
    {
        p->next=pdau;
        pdau=p;
    }
}
void INDANHSACH()
{
    struct node *q;
    q=pdau;
    while(q!=NULL)
    {
        printf("[ %d ]  ",q->data);
        q=q->next;
    }
}
void main()
{
    THEMVAODAU(3);
    INDANHSACH();
}
