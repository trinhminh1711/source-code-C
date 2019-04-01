#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, i, k, m, tich;
    printf("nhap so thu 1 :\n");
    scanf("%d", &a);
    printf("nhap so thu 2 : \n");
    scanf("%d", &b);
    UCLN(a , b, i , k);
    BCNN(a, b, tich, m);
    getch();
}
int UCLN(int a, int b)
{
    int i, k;
    if(a>=b)
    {
        for(i=b; i>=1; i--)
        {
            if(a%i==0 && b%i==0)
            {
                printf("UCLN:%d", i);
                break;
            }
        }

    }
    else
    {
        for(k=a; k<=a; k--)
            if(a%k==0&&b%k==0)
            {
                printf("UCLN:%d",k);
                break;
            }

    }

}
int BCNN(int a, int b)
{
    int tich=a*b;
    int m;
    for(m=1; m<=tich; m++)
    {
        if(m%a==0&&m%b==0)
        {
            printf("\nBCNN :%d",m);
            break;
        }


    }

}

