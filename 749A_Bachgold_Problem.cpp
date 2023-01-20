#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int m=n/2;
    cout<<m<<endl;
    if(n%2==1)
    {
        for(int i=1; i<m; i++)
        {
            cout<<2<<" ";    
        }    
        cout<<3<<" ";
    }
    else
    {
        for(int i=1; i<=m; i++)
        {
            cout<<2<<" ";    
        }   
    }
    return 0;
}
