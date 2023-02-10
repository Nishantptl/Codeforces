#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, b, c, c1=0, c2=0;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            c2++;
            b=i;
        }
        else
        {
            c1++;
            c=i;
        }
    }
    if(c1>c2)
        cout<<b;
    else
        cout<<c;
    return 0;
}
