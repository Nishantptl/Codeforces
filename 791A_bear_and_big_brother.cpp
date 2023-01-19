#include <stdio.h>
int main() 
{
    int l, b, y=1;
    scanf("%d %d", &l, &b);
    for(int i=1; l<=b; i++)
    {
        l = l*3;
        b = b*2;
        if(l<=b)
        y++;
    }
    printf("%d", y);
    return 0;
}
