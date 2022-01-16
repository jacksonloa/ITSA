// [C_MM14-易] 計算時間的組合 //

#include <stdio.h>

int main()
{
    int input;
    int day, hour, min, sec;

    scanf("%d", &input);
    day = input / 86400;
    hour = (input - (day*86400)) / 3600;
    min = (input - (day*86400) - (hour*3600)) / 60;
    sec = input - (day*86400) - (hour*3600) - (min*60);
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", day, hour, min, sec);
    return 0;
}