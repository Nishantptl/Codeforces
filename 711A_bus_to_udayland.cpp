#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, c=0;
    cin>>n;
    char str[n][5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>str[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        if((str[i][0]==str[i][1]) && str[i][0]=='O')
        {
            str[i][0]='+';
            str[i][1]='+';
            break;
        }
        else if((str[i][3]==str[i][4]) && str[i][3]=='O')
        {
            str[i][3]='+';
            str[i][4]='+';
            break;
        }
        c++;
    }
    if(c==n)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout<<str[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
