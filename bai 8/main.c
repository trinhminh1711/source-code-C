#include <stdio.h>
#include<string.h>
void main()
{
    char a[100];
    printf("nhap xau can dao :");
    gets(a);
    printf("chuoi dao nguoc : %s", strrev(a));
    getchar();
}

