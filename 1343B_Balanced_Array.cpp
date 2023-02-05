#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t, n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int a[n/2], b[n/2], i=2, j=1;
        if(n%4!=0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int j=2, z=1;
            for(int i=1; i<=n/2; i++)
            {
                a[i]=j;
                j=j+2;
            }
            for(int i=1; i<n/2; i++)
            {
                b[i]=z;
                z=z+2;
            }
            b[n/2] = a[n/2]+ b[(n/2)/2];
            for(int i=1; i<=n/2; i++)
                cout<<a[i]<<" ";
            for(int i=1; i<=n/2; i++)
                cout<<b[i]<<" ";
            cout<<endl;
        }
        t--;
    }
    return 0;
}
