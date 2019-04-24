#include <stdio.h>
#include <stdlib.h>
#include<pthread.h>
#include<windows.h>
#include<unistd.h>x
void *thread1()
{
    int r;
    int i=0;
    while(1)
    {
        Sleep(2000);
         r =rand() % 31;
        printf("\n%d",r);
        FILE *f;
        f=fopen("input1.txt","w");
        fprintf(f,"%d",r);
        fclose(f);
        i++;
    }
}
void *thread2()
{
    int r, a;
    while(1)
    {
        Sleep(2000);
        FILE *f;
        f=fopen("input1.txt ","r");
        fscanf(f,"%d",&r);
        fclose(f);
        a=r*r;
        f=fopen("output1.txt","w");
        fprintf(f,"%d",a);
        fclose(f);

    }
}
int main()
{
    pthread_t data1,data2;
    pthread_create(&data1,NULL,thread1,NULL);
    pthread_create(&data2,NULL,thread2,NULL);


    pthread_join(data1,NULL);
    pthread_join(data2,NULL);
    return 0;
}



