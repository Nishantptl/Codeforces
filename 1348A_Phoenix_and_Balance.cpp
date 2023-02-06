#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t, n, sum1, sum2;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int a[n];
        for(int i=1; i<=n; i++)
        {
            a[i]=pow(2, i);
        }
        sum1=a[n];
        sum2=0;
        for(int i=1; i<n/2; i++)
            sum1=sum1+a[i];
        for(int j=n/2; j<n; j++)
            sum2=sum2+a[j];
        cout<<abs(sum1-sum2)<<endl;
        t--;
    }
    return 0;
}
