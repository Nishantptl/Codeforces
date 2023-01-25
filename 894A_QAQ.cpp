#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int c=0;
    string a;
    cin>>a;
    for(int i=0; i<a.length(); i++)
    {
        for(int j=i+1; j<a.length(); j++)
        {
            for(int z=j+1; z<a.length(); z++)
            {
                if(a[i]=='Q' && a[j]=='A' && a[z]=='Q')
                 c++;
            }
        }
    }
    cout<<c;
    return 0;
}
