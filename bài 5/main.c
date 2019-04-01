#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf(" moi ban nhap ngay thang nam :\n");
    printf("nhap ngay :");
    scanf("%d", &a);
    printf("nhap thang :");
    scanf("%d", &b);
    printf("nhap nam:");
    scanf("%d", &c);
    if(a<=0||a>31||b<=0||b>12||c<=0)
    {
        printf("ngay thang nam ban nhap k hop le");
    }
    else if(a>0 || a<31 || b>0 || b<=12|| c>0)
    {
        if(c%400==0)
        {
            printf("nam nhuan");

        }
        if(c%4==0 && c%100!=0)
        {
            printf("nam nhuan");
        }
        else if(c%4!=0 || c%400!=0||(c%400!=0 && c%100==0))
        {
            printf("nam khong nhuan");
        }
    }
getch();

}
