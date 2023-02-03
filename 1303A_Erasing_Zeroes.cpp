#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t, x;
    cin>>t;
    string a;
    while(t>0)
    {
        cin>>a;
        int c=0;
        for(int i=0; i<a.length(); i++)
        {
            if(a[i]=='1')
                x=i;
        }
        for(int i=0; i<a.length(); i++)
        {
            if(a[i]=='1')
            {
                int j=i+1;
                while(j<x)
                {
                    if(a[j]=='0')
                        c++;
                    j++;
                }
                break;
            }
        }
        cout<<c<<endl;
        t--;
    }
    return 0;
}
