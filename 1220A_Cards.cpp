#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]=='n')
            cout<<1<<" ";
    }
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]=='z')
            cout<<0<<" ";
    }
    return 0;
}
