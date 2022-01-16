// [C_MM28-易] 計算1到N之間屬於5和7的倍數 //

#include <stdio.h>

int main()
{
    int n, cnt = 0;
    int number[500] = {0};

    scanf("%d", &n);
    for(int i = 1; i <= n; i ++)
    {
        if(i % 35 == 0)
        {
            number[cnt] = i;
            cnt ++;
        }
    }
    for(int i = 0; i < cnt; i ++)
    {
        if(i == (cnt-1))
        {
            printf("%d\n", number[i]);
        }
        else printf("%d ", number[i]);
    }
    return 0;
}