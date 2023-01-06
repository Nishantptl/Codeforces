#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int k, r, c=0, s=0;
    cin>>k>>r;
    while(1)
    {
        s=s+k;;
        c++;
        if(s%10==0 || (s-r)%10==0)
        {
            cout<<c;
            break;
        }
    }
    return 0;
}
