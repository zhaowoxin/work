#include <stdio.h>
//#include <sys/time.h>
#include <time.h>

int main(void)
{
    char *ptime;
    struct tm *ptmtime;
    time_t timet;
    //struct timeval time;

    timet = time(NULL);
    printf("%u\n", (unsigned int)timet);
    ptmtime = localtime(&timet);
    ptime = asctime(ptmtime);
    //gettimeofday(&time, NULL);
    //printf("%f, %f\n", (float)time.tv_sec, (float)time.tv_usec);
    printf("%s\n", ptime);

    return 0;
}
