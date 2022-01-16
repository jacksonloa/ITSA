// [C_MM36-易] 季節判定 //

#include <stdio.h>

int main()
{
    int mon;

    scanf("%d", &mon);
    if(mon >= 3 && mon <= 5)
    {
        printf("Spring\n");
    }
    else if(mon >= 6 && mon <= 8)
    {
        printf("Summer\n");
    }
    else if(mon >= 9 && mon <= 11)
    {
        printf("Autumn\n");
    }
    else if(mon == 12 || mon == 1 || mon == 2)
    {
        printf("Winter\n");
    }
    return 0;
}