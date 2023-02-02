#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t, a, b, c, n;
    cin>>t;
    while(t>0)
    {
        cin>>a>>b>>c>>n;
        if((a==b && b==c) && n%3==0)
            cout<<"YES"<<endl;
        else
        {
            int x = max(a,b);
            int y = max(x,c);
            int m = (max-a) + (max-b) + (max-c);
            int re = n - m;
            if(re>=0 && re%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}
