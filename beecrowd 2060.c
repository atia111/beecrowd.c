#include <stdio.h>
int main()
{
    int num, i, a, w=0, x=0, y=0, z=0;
    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        scanf("%d", &a);
        if(a % 2 == 0) w++;
        if(a % 3 == 0) x++;
        if(a % 4 == 0) y++;
        if(a % 5 == 0) z++;
    }
    printf("%d Multiplo(s) de 2\n", w);
    printf("%d Multiplo(s) de 3\n", x);
    printf("%d Multiplo(s) de 4\n", y);
    printf("%d Multiplo(s) de 5\n", z);
    return 0;
}
