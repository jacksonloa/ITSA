// (其他I) [C_OT40-易] 判斷三角形 //

#include <stdio.h>

int main()
{
    int r1, r2, r3;

    scanf("%d%d%d", &r1, &r2, &r3);
    if(r1+r2 > r3 && r2+r3 > r1 && r1+r3 > r2)
    {
        printf("Bigger than the third side\n");
    }
    else printf("Less than the third side\n");
    return 0;
}