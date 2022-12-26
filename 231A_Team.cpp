#include <stdio.h>
int main() 
{
    int n, c=0, s=0;
    int p[1000], v[1000], t[1000], a[1000];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d", &p[i], &v[i], &t[i]);
        a[i] = p[i]+v[i]+t[i];
    }
    for(int i=0; i<n; i++)
    {
        if((a[i]==2) || (a[i]==3))
        {
            c++;
        }
        if(c==1)
        {
            s++;
        }
        c=0;
    }
    printf("%d", s);
    return 0;
}
