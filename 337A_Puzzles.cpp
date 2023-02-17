#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)
        cin>>a[i];
    sort(a, a+m);
    int min = a[m-1];
    for(int i=0,j=n-1; j<m; i++,j++)
    {
        int x = abs(a[i]-a[j]);
        if(x<min)
            min=x;
    }
    cout<<min;
    return 0;
}
