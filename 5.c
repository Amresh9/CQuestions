// minute to hour
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int minute;
    scanf("%d", &minute);
    int hour = minute / 60;
    int remainingMinute = minute % 60;
    printf("%d Minute : %d Hour %d Minute\n", minute, hour, remainingMinute);
    return 0;
}
