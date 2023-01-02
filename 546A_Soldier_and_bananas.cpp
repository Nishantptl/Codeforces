#include <stdio.h>
int main() 
{
    int k, n, w, c=0, a;
    scanf("%d %d %d", &k, &n, &w);
    for(int i=1; i<=w ;i++)
    {
        c = c + k*i;
    }
    if(c>n)
    {
        a = c-n;
        printf("%d", a);
    }
    else
    printf("0");
    return 0;
}
