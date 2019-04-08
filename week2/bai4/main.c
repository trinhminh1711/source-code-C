#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i=1,n,a;
    printf("input :");
    scanf("%d",&n);
    if( n>=5||n<2)
    {
        printf("n phai lon hon 1 hoac nho hon 5\n");
        printf("nhap lai n :");
        scanf("%d",&a);
        while(11*i<pow(10,a))
        {

            printf("%d\n ",11*i);
            i++;
        }

    }
    else if(n>=2&&n<5)
    {

        while(11*i<pow(10,n))
        {
            printf("%d\n",11*i);
            i++;
        }
    }

    getch();
}
