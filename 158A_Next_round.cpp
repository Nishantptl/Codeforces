#include <stdio.h>
int main() 
{
    int n, k, c=0;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    k = a[k-1];
    for(int i=0; i<n; i++)
    {
        if(k==0)
        {
            if(a[i]>k)
            c++;
        }
        else
        {
            if(a[i]>=k)
            c++;
        }
    }
    printf("%d", c);
    return 0;
}
