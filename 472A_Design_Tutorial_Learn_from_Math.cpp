#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long int n, e, o;
    cin>>n;
    e=n-9;
    o=n-4;
    if(n%2==0)
         cout<<o<<" "<<n-o;
    else
        cout<<e<<" "<<n-e;
    return 0;
}
