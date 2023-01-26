#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string A, B, C, D, E, F;
    cin>>A;
    cin>>B>>C>>D>>E>>F;
    if((A[0]==B[0] || A[1]==B[1]) || (A[0]==C[0] || A[1]==C[1]) || (A[0]==D[0] || A[1]==D[1]) || (A[0]==E[0] || A[1]==E[1]) || (A[0]==F[0] || A[1]==F[1]))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
