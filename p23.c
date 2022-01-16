// [C_MM40-易] 1~N之間的總和 //

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    scanf("%d", &n);
    sum = (1+n) * n / 2;
    for(int i = 1; i <= n; i ++)
    {
        if(i == n)
        {
            printf("%d = ", i);
            break;
        }
        printf("%d + ", i);
    }
    printf("%d\n", sum);
    return 0;
}