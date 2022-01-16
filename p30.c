// [C_MM38-易] 判斷3整數是否能構成三角形之三邊長 //

#include <stdio.h>

int main()
{
    int r1, r2, r3;

    scanf("%d%d%d", &r1, &r2, &r3);

    if(r1+r2 > r3 && r1+r3 >r2 && r2+r3 > r1)
    {
        printf("fit\n");
    }
    else 
    {
        printf("unfit\n");
    }
    return 0;
}