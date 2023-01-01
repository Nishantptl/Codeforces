#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string a;
    getline(cin, a);
    int c=0;
    sort(a.begin(), a.end());
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]=='{' || a[i]=='}' || a[i]==',' || a[i]==' ')
        continue;
        else
        {
            if(a[i]!=a[i+1])
            c++;
        }
    }
    cout<<c;
    return 0;
}
