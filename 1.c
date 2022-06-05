// 2.Print Current Time in C
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv)
{
    time_t t1;
    time(&t1);
    printf("Current Time : %s\n", ctime(&t1));

    return 0;
}
