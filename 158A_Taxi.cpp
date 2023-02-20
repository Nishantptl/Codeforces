#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c=0, a1=0, a2=0, a3=0, a4=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==4)
            a4++;
        if(a[i]==3)
            a3++;
        if(a[i]==2)
            a2++;
        if(a[i]==1)
            a1++;
    }
    c+=a4;
    if(a3<a1)
    {
        c+=a3;
        a1=a1-a3;
        a3=0;
    }
    else if(a1<=a3)
    {
        c+=a1;
        a3=a3-a1;
        a1=0;
    }
    if(a3>0)
    {
        c+=a3;
        a3=0;
    }
    if(a2>0)
    {
        c+=a2/2;
        a2=a2%2;
    }
    int left = a1+ (a2*2);
    if(left<=4 && left>0)
        c+=1;
    else if(left%4!=0)
        c+=(left/4)+1;
    else
        c+=left/4;
    cout<<c;
    return 0;
}
