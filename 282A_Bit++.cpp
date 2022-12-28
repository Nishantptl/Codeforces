#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, x=0;
    cin>>n;
    char a, b, c;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(b=='+')
        x++;
        else
        x--;
    }
    cout<<x;
    return 0;
}
