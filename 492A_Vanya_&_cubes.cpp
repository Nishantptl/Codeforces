#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, c=0, sum=0, i=1, a=0;
    cin>>n;
    while(a<=n)
    {
        c++;
        sum = sum+i;
        a = a + sum;
        i++;
    }
    cout<<c-1;
    return 0;
}
