#include<bits/stdc++.h>
using namespace std;

int factorial(int val)
{
    long long int m;
    if(val==1)
        return 1;
    else
    {
        m = val * factorial(val-1);        
    }
    return m;
}

int main() 
{
    long long int A, B, x , y;
    cin>>A>>B;
    x = min(A, B);
    y = factorial(x);
    cout<<y;
    return 0;
}
