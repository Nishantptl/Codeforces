#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t, s=0, d=0, i=1;
    cin>>t;
    int a[t], f=0, r=t-1;
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
    while(f!=r)
    {
        if(i%2==1)
        {
            if(a[f]<a[r])
            {
                s=s+a[r];
                r--;
            }
            else
            {
                s=s+a[f];
                f++;
            }
        }
        else
        {
            if(a[f]<a[r])
            {
                d=d+a[r];
                r--;
            }
            else
            {
                d=d+a[f];
                f++;
            }    
        }
        i++;
    }
    if(i%2==1)
        s=s+a[f];
    else
        d=d+a[f];
    cout<<s<<" "<<d;
    return 0;
}
