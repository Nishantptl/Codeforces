#include<bits/stdc++.h>
using namespace std;
int main() 
{
   string s;
   cin>>s;
   int a[100],k=0;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]!='+')
       {
           a[k]=s[i]-48;
           k++;
       }
   }
   sort(a,a+k);
   for(int i=0;i<k-1;i++)
   {
       cout<<a[i]<<"+";
   }
   cout<<a[k-1];
   
   
   
    return 0;
}
