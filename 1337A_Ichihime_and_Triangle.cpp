#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t, a, b, c, d;
    cin>>t;
    while(t>0)
    {
        cin>>a>>b>>c>>d;
        cout<<max(a,b)<<" ";
        cout<<c<<" ";
        cout<<c<<endl;
        t--;
    }
    return 0;
}
