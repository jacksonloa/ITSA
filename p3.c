// [C_MM25-易] 計算正整數被3整除之數值之總和 //

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    scanf("%d", &n);
    for(int i = 1; i <= n; i ++)
    {
        if(i % 3 == 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}