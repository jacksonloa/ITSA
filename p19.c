// [C_MM16-易] 判斷座標是否在圓形的範圍內 //

#include <stdio.h>

int main()
{
    int x, y, len;
    int i = 0;

    scanf("%d%d", &x, &y);
    len = x * x + y * y;
    while(i*i < len)
    {
        i ++;
    }
    if(i <= 100) printf("inside\n");
    else printf("outside\n");
    return 0;
}