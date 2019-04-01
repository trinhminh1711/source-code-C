#include<stdio.h>
#include<conio.h>
void main()
{
    int a, cost, unit1;
    printf("nhap quang duong da di(don vi :m) :");
    scanf("%d", &a);

    if(a<=1000)
    {
        cost= 10000 ;
    }
    else if(a>1000&&a<30000)
    {
        if(a%200 == 0)
        {
            cost=10000+ (a-1000)*(float)1500/200;
        }
        else
        {
            cost=10000+(((a/200)*200)-1000)*(float)1500/200+1500;
        }
    }
    else if(a>30000)

        if(a%1000==0)
        {

            cost= 10000+(29000*(float)1500/200)+((a-30000)*8);
        }

        else
        {
            cost=10000+(29000*(float)1500/200)+(((a/1000)*1000-30000)*8)+8000;
        }

    printf("gia tien phai tra %d VND", cost);

    getch();
}
