// [C_MM13-易] 停車費計算 //

#include <stdio.h>

int main()
{
    int sh, sm, eh, em;
    int ttime, thhour; //ttime = total time, thhour = total half hour
    int cost = 0;

    scanf("%d %d %d %d", &sh, &sm, &eh, &em);
    ttime = (eh*60+em) - (sh*60+sm);
    thhour = ttime /30;

    for(int i = 0; i < thhour; i ++)
    {
        if(i < 4)
        {
            cost += 30;
        }
        else if(i < 8 && i >= 4)
        {
            cost += 40;
        }
        else
        {
            cost += 60;
        }
    }
    printf("%d\n", cost);
    return 0;
}