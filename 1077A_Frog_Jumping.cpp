#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long int t, a, b, k;
    cin>>t;
    while(t>0)
    {
        cin>>a>>b>>k;
        long long int x = k/2;
        long long int ans = a*(k-x) - b*x;
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
