// [C_MM32-易] Armstrong數 //

#include <stdio.h>

int main()
{
    int n;
    int originaln, remain, sum = 0;

    scanf("%d", &n);
    originaln = n;
    while(originaln != 0)
    {
        remain = originaln % 10; // 取出最右邊的數
        sum += remain * remain * remain; // 加總到sum
        originaln /= 10; // 將originaln減少一位
    }
    if(sum == n) printf("Yes\n");
    else printf("No\n");
    return 0;
}