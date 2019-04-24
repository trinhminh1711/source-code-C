#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <windows.h>
#include <semaphore.h>
#define N 100
int number=0;
sem_t semaphore;
pthread_mutex_t mutex;
int i=0;

void *SEMAPHORE2()
{
    while (i<100)
    {
        sem_wait(&semaphore);
            printf("\n%d",i++);
        sem_post(&semaphore);
    }
}
void *MUTEX()
{
    int k=0;
    while (k<100)
    {
        pthread_mutex_lock(&mutex);
        printf("\n%d",k++);
        pthread_mutex_unlock(&mutex);
    }
}
int main()
{

clock_t batdau2 = clock();
int k=0;
 pthread_t threads[4];
   double time1, time2;

    for (k=0; k<4; k++)
        pthread_create(&threads[k], NULL, MUTEX, NULL);
    for (k=0; k<4; k++)
        pthread_join(threads[k],NULL);


    clock_t ketthuc2 = clock();
    time2 = (double)(ketthuc2-batdau2)/CLOCKS_PER_SEC;
    printf("\n");

      int i;
    clock_t batdau1=clock();
    sem_init(&semaphore,0,4);
    printf("Semaphore: ");
    for (i=0; i<4; i++)
        pthread_create(&threads[i], NULL, SEMAPHORE2, NULL);
    for (i=0; i<4; i++)
        pthread_join(threads[i],NULL);
    clock_t ketthuc1 = clock();
    time1 = (double)(ketthuc1-batdau1)/CLOCKS_PER_SEC;;

    printf("\n");

    printf("Time for semaphore: %f\n",time1);
    printf("Time for 1 thread: %f\n",time2);
    return 0;
}
