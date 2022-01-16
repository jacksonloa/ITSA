// [C_MM12-易] 相遇時間計算 //

#include <stdio.h>

int main()
{
    int cnt = 0;
    float d;

    scanf("%f", &d);
    d *= 100;
    while(d > 0)
    {
        d = d + 76.2 - 100;
        cnt ++;
    }
    printf("%d\n", cnt);
    return 0;
}