#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<conio.h>
void SELECTION_SORT()
{
    int a[100],i,j,n,min,tg;
    printf("nhap so phan tu : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("nhap a[%d]:",i);
        scanf("%d",&a[i]);
    }

    for (i=0; i<n; i++)
    {
        min = a[i];
        for (j=i; j<n; j++)
            if (a[j] < min)
            {
                min = a[j];
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
void BUBBLE_SORT()
{
    int a[100],i,j,n,tg;
    printf("nhap so phan tu : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("nhap a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=n-1; j>i; j--)
        {
            if(a[j-1]>a[j])
            {
                tg=a[j];
                a[j]=a[j-1];
                a[j-1]=tg;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
void INSERTION_SORT()
{
    int a[100],i,j,n,tg;
    printf("nhap so phan tu : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("nhap a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        j=i;
        while(j>0&&a[j-1]>a[j])
        {
            tg=a[j-1];
            a[j-1]=a[j];
            a[j]=tg;
            j--;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

void main()
{
    printf("thuat toan selection sort\n");
    SELECTION_SORT();
    printf("\nthuat toan bubble sort \n");
    BUBBLE_SORT();
    printf("\nthuat toan insertion sort \n");
    INSERTION_SORT();
    getch();
}
