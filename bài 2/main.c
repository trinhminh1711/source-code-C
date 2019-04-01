#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
void main()
{
    int demhoa, demthuong, i, n;
    char a[100];
    printf("Input: ");
    gets(a);
    demhoa = 0;
    demthuong = 0;
    i= 0;
    n= strlen(a);
for(i=0; i<=n; i++)
{

    if(a[i] >= 65 && a[i] <= 90)
    {
    demhoa = demhoa+1 ;

    }
    else if(a[i] >= 97 && a[i] <= 122)
    {
        demthuong= demthuong + 1 ;


    }
}
printf("so chu hoa la :%d\n" , demhoa);
printf("so chu thuong la :%d\n" , demthuong);
getch();
}
