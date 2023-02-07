#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t, n;
    cin>>t;
    int a, b;
    while(t>0)
    {
        cin>>a>>b;
        if(a>b)
        {
            n=2*b;
            if(n>a)
                cout<<n*n<<endl;
            else
            cout<<a*a<<endl;
        }
        else
        {
            n=2*a;
            if(n>b)
                cout<<n*n<<endl;
            else
                cout<<b*b<<endl;
        }
        t--;
    }
    return 0;
}
