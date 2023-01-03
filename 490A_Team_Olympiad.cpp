#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, min, t1=0, t2=0, t3=0;
    int x=1, y=1, z=1;
    cin>>n;
    int a[n], a1[n], a2[n], a3[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            a1[x]=i;
            t1++;
            x++;
        }
        if(a[i]==2)
        {
            a2[y]=i;
            t2++;
            y++;
        }
        if(a[i]==3)
        {
            a3[z]=i;
            t3++;
            z++;
        }
    }
    if(t1==0 || t2==0 || t3==0)
    cout<<0;
    else
    {
        if(t1<t2)
        {
            if(t1>t3)
            min=t3;
            else
            min=t1;
        }
        else
        {
            if(t2<t3)
            min=t2;
            else
            min=t3;
        }
        cout<<min<<endl;
        for(int i=1; i<=min; i++)
        {
            cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
        }
    }
    return 0;
}
