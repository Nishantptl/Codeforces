#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, c=0;
    cin>>n;
    int p[n], q[n];
    for(int i=0; i<n; i++)
    {
        cin>>p[i]>>q[i];
    }
    for(int i=0; i<n; i++)
    {
        if(p[i]<q[i] && abs(p[i]-q[i])>=2)
        c++;
    }
    cout<<c;
    return 0;
}
