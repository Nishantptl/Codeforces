#include <stdio.h>
int main() 
{
    int n, a=0, d=0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", &str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='A')
        a++;
        else
        d++;
    }
    if(a>d)
    printf("Anton");
    else if(a<d)
    printf("Danik");
    else
    printf("Friendship");
    return 0;
}
