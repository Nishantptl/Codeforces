#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string s2;
    cin>>c>>s2;
    if(c=='R')
    {
        for(int i=0; i<s2.length(); i++)
        {
            for(int j=0; j<s1.length(); j++)
            {
                if(s1[j]==s2[i])
                {
                    cout<<s1[--j]; 
                    goto lab1;
                }
            }
            lab1 : 
            ;
        }
    }
    else
    {
        for(int i=0; i<s2.length(); i++)
        {
            for(int j=0; j<s1.length(); j++)
            {
                if(s1[j]==s2[i])
                {
                    cout<<s1[++j]; 
                    goto lab2;
                }
            }
            lab2 : 
            ;
        }   
    }
    return 0;
}
