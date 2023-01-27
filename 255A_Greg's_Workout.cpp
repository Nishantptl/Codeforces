#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, c=0, b=0, bk=0;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i=i+3)
        c = c + a[i];
    for(int i=2; i<=n; i=i+3)
        b = b + a[i];
    for(int i=3; i<=n; i=i+3)
        bk = bk + a[i];
    int x = max(c , b);
    int y = max(x , bk);
    if(y==c)
        cout<<"chest";
    else if(y==b)
        cout<<"biceps";
    else
        cout<<"back";
    return 0;
}
