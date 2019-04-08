#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i,n,a;
    printf("input :");
    scanf("%d",&n);
    {
        if( n>=5||n<2)
        {
            printf("n phai lon hon 1 hoac nho hon 5\n");
            printf("nhap lai n :");
            scanf("%d",&a);
             for(i=1; i<pow(10,a); i++)
        {
            if(i%(11)==0)
            {
                printf("%d\n",i);
            }
        }

        }
        else if(n>=2&&n<5)
        {
        {
        for(i=1; i<pow(10,n); i++)
        {
            if(i%(11)==0)
            {
                printf("%d\n",i);
            }
        }
        }
        }
    getch();
}
}
