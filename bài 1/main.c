#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c, tg;
    printf("nhap vao n:");
    scanf("%d", &n);
    a=n/100;
    b=(n%100)/10;
    c=n%10;
    if(a<b)
    {
        tg = a;
        a = b ;
        b = tg ;
    }
    if(b<c)
    {
        tg = b;
        b = c;
        c = tg;
    }
    if (a<b)
    {
        tg = a;
        a = b;
        b = tg;
    }
    printf("%d%d%d", a, b, c);
    getch();
}
