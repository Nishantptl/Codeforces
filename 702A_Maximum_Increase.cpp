#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ct=1,s=1;
    cin>>n;
    long long int a[n];
    cin>>a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>a[i-1])
        {
            ct++;
        }
        else
        {
           if(ct>s)
           {
            s=ct;
           } 
           ct=1;
        }
    }
    if(ct>s)
    {
        s = ct;
    }
    cout<<s;
}
