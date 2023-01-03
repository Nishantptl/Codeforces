#include<stdio.h>
int main()
{
    int x, y=0, c=0;
    scanf("%d", &x);
    for(int i=1; x!=y; i++)
    {
        if(x>=5 && y<x && x-y>=5)
        {
            y = y+5;
            c++;
        }
        else if(x-y==4)
        {
            y = y+4;
            c++;
        }
        else if(x-y==3)
        {
            y = y+3;
            c++;
        }
        else if(x-y==2)
        {
            y = y+2;
            c++;
        }
        else if(x-y==1)
        {
            y = y+1;
            c++;
        }
        else
        {
        }
    }
    printf("%d", c);
    return 0;
}
