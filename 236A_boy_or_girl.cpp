#include <stdio.h>
int main() 
{
    int c=0, x;
    char str[100];
    scanf("%s", &str);
    for(int i=0; str[i]!='\0'; i++)
    {
        for(int j=i+1; str[j]!='\0'; j++)
        {
            if(str[i]==str[j])
            {
                c++;
                break;
            }
        }
    }
    x = strlen(str) - c;
    if(x%2==1)
    printf("IGNORE HIM!");
    else
    printf("CHAT WITH HER!");
    return 0;
}
