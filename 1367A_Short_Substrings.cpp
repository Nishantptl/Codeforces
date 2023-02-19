#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<a[0];
        for(int i=0;i<a.length();i++)
        {
            
            if(a[i]=a[i+1])
            {
                cout<<a[i];
            }
            if(a[i]!=a[i+1]){
                cout<<a[i];
            }
            i++;
        }
        cout<<endl;
    }
}zz
