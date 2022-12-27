#include<stdio.h>
int main()
{
    int n, c=0;
    scanf("%d", &n);
    char str[1000];
    for(int i=0; i<=n; i++)
    {
        scanf("%c", &str[i]);
    }
    for(int i=0; str[i]!='\0'; i++)
    {
        if((str[i]=='R' && str[i+1]=='R') || (str[i]=='B' && str[i+1]=='B') || (str[i]=='G' && str[i+1]=='G'))
        {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}
