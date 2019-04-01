#include <stdio.h>
#include <string.h>
void main()
{
    char a[100]; char b[100];
    int n, i, j;
    printf("nhap xau :");
    gets(a);
    n=strlen(a);

    for(i=0;i<n;i++)
    {
        if(a[i]==' '&& a[i+1]==' ')
            for(j=i;j<=n;j++)
        {
            a[j]=a[j+1];
        }
    }

    for(i=0;i<n;i++)
    {
        if((a[i]==' '&& a[i+1]==',')||(a[i]==' ' && a[i+1]=='.'))
            for(j=i;j<=n;j++)
        {
            a[j]=a[j+1];
        }
    }

    for(i=0;i<n;i++)
    {
        if((a[i]==','&& a[i+1]==',')||(a[i]=='.'&& a[i+1]=='.'))
            for(j=i;j<=n;j++)
        {
            a[j]=a[j+1];
        }
    }
    for(i=0; i<n ;i++)
    {
            printf("%c", a[i]);
    }
    getch();
}
