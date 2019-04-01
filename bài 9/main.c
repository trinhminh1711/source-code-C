#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,a[50][50],i,j,b[50],c[50],tg=0;
    printf("nhap so hang`");
    scanf("%d",&m);
    printf("nhap so cot ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            printf("a[%d][%d]= ", i,j);
            scanf("%d",&a[i][j]);
        }

    }
    for(i=1; i<=n; i++)
    {
        printf(" \n");
        for(j=1; j<=m; j++)
        {
            printf(" %d ",a[i][j]);
        }
    }
    printf("\nnhap vecto n \n");
    for(i=1; i<=n; i++)
    {
        printf("nhap b[%d] =",i);
        scanf("%d",&b[i]);
    }
    for(i=1; i<=n; i++)
    {
        printf("%d \n",b[i]);
    }
    printf("\n out put: \n");
    for(i=1; i<=m; i++)
    {
        tg=0;
        printf("\n");
        for(j=1; j<=n; j++)
        {
            tg=tg+a[i][j]*b[j];

        }
        printf(" out put : %d ",tg);
    }
    getch();

}
