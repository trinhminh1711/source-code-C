#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <windows.h>
#include <semaphore.h>


sem_t semaphore;
int i = 0;

void *SEMAPHORE()
{
    while (i<120)
    {
        sem_wait(&semaphore);
        printf("%d \n",i++);
        sem_post(&semaphore);
    }
}
int main()
{
    int i;
    double time1, time2;

    clock_t batdau1 = clock();
    sem_init(&semaphore,0,6);
    pthread_t threads[6];
    for (i=0; i<6; i++)
        pthread_create(&threads[i], NULL, SEMAPHORE, NULL);
    for (i=0; i<6; i++)
        pthread_join(threads[i],NULL);
    clock_t ketthuc1 = clock();
    time1 = (double)(ketthuc1-batdau1)/CLOCKS_PER_SEC;

    clock_t batdau2=clock();
    for (i=0; i<120; i++)
        printf("%d \n",i);
    clock_t ketthuc2=clock();
  time2 = (double)(ketthuc2-batdau2)/CLOCKS_PER_SEC;
    printf("Time semaphore: %f\n",time1);
    printf("Time 1 thread: %f\n",time2);
    return 0;
}
