#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int xoa,dem,chon,h,n,i,chon2,msua,sua;
struct node
{
    int data;
    struct node *next;
    struct node *before;

};
struct node *pdau=NULL;
struct node *pcuoi=NULL;
void THEMVAODAU(int x)
{
    struct node *p;
    p= (struct node*) malloc(sizeof(struct node));
    p->data=x;
    p->before=NULL;
    p->next=NULL;
    if(pdau==NULL)
    {
        pdau=pcuoi=p;
    }
    else
    {

        pdau->before=p;
        p->next=pdau;
        pdau=p;
    }
}
void THEMVAOCUOI(int y)
{
    struct node *p;
    p= (struct node*) malloc(sizeof(struct node));
    p->data=y;

    if(pdau=NULL)
    {
        pdau=pcuoi=p;
    }
    else
    {
        pcuoi->next=p;
        p->before=pcuoi;
        pcuoi=p;
    }
}
void INDANHSACH()
{
    struct node *q;
    q=pdau;
    while(q!=NULL)
    {
        printf("[%d]  ",q->data);
        q=q->next;
    }
}
void XOADAUDANHSACH()
{

    struct node *pxoa;
    pxoa=(struct node *)malloc(sizeof(struct node));
    pxoa=pdau;
    pdau=pxoa->next;
    pxoa->next->before=NULL;

}
void DEMSOLUONGPHANTU(int dem)
{
    dem=1;
    struct node *pdem;
    pdem=pdau;
    while(pdem->next!=NULL)
    {
        dem=dem+1;
        pdem=pdem->next;
    }
    printf("\nso luong phan tu la %d\n",dem);
}
void SUAPHANTU(int sua,int msua)
{
    printf("\nnhap phan tu mua sua trong day\n");
    scanf("%d",&sua);
    printf("\nnhap gia tri muon sua\n");
    scanf("%d",&msua);
    struct node *psua;
    psua=pdau;
    while(psua!=NULL)
    {
        if(psua->data==sua)
        {
            psua->data=msua;
        }
        psua=psua->next;
    }

}
void main()
{
    printf("nhap so phan tu cua danh sach :");
    scanf("%d",&n);
    for(h=0; h<n; h++)
    {
        printf("nhap phan tu can them :");
        scanf("%d",&i);
        THEMVAODAU(i);
    }
    printf("danh sach phan tu la \n");
    INDANHSACH();
    DEMSOLUONGPHANTU(dem);
    XOADAUDANHSACH();
    printf("danh sach sau khi xoa la :\n");
    INDANHSACH();
    SUAPHANTU(sua,msua);
    printf("\nday sau khi sua\n");
    INDANHSACH();
getch();
}


