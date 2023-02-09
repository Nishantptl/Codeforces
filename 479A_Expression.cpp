#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int a[3];
    for(int i=0; i<3; i++)
        cin>>a[i];
    int x = a[0]+a[1];
    int y = a[0]*a[1];
    int z = a[1]+a[2];
    int w = a[1]*a[2];
    int m1 = x*a[2];
    int m2 = y*a[2];
    int m3 = a[0]*z;
    int m4 = a[0]*w;
    int m5 = a[0]+a[1]+a[2];
    int m6 = a[0]*a[1]*a[2];
    cout<<max(m1, max(m2, max(m3, max(m4, max(m5, m6)))));
    return 0;
}
