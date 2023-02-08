#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t, n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int a[n], min;
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        min=abs(a[0]-a[1]);
        for(int i=0; i<n; i++)
        {
            if(abs(a[i]-a[i+1])<min)
                min=abs(a[i]-a[i+1]);
        }
        cout<<min<<endl;
        t--;
    }
    return 0;
}
