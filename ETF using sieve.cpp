#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mxN=1e6+2;
int phi[mxN];
void ETF()
{
    for(int i=1; i<mxN; i++)phi[i]=i-1;phi[1]=1;
    for(int i=2; i<mxN; i++)for(int j=i*2;j<mxN;j+=i)phi[j]-=phi[i];
}
int main()
{
    ETF();
    int t;cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n;
        cout<<phi[n]<<endl;
    }
    return 0;
}
