#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2, k3, k5, k6, sum=0;
    cin>>k2>>k3>>k5>>k6;
    int a = min(k5, k6);
    int b = min(a, k2);
    sum = sum + b*256;
    int c = k2-b;
    int d = min(c,k3);
    sum = sum + d*32;
    cout<<sum;
    return 0;
}
