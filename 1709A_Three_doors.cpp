#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x, a, b, c;
    while(t>0)
    {
        int i=1, j=0;
        cin>>x;
        cin>>a>>b>>c;
        while(i<=3)
        {
            if(x==1 )
            {
                x=a;
                j++;
            }
            else if(x==2)
            {
                x=b;
                j++;
            }
            else if(x==3)
            {
                x=c;
                j++;
            }
            else
            {
            }
            i++;
        }
        if(j==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        t--;
    }
    return 0;
}