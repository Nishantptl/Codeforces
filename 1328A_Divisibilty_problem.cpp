#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, c, rem;
    cin>>n;
    long long int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]%b[i]==0)
        cout<<0<<endl;
        else
        {
            rem = a[i]%b[i];
            c = b[i]-rem;
            cout<<c<<endl;
        }
    }
    return 0;
}
