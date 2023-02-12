#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>a;
    int a[n], max=0, c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0 && a[i]>=a[i-1])
        {
            c++;
            if(c>=max)
                max=c;
        }
        else
            c=0;
    }
    if(n==1)
        cout<<1<<endl;
    else
        cout<<max+1;
    return 0;
}
