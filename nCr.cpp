#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mxN=1e6+4,mod=1e9+7;
ll f1[mxN],f2[mxN],inv[mxN];
void inverse()
{
    inv[1]=1;
    for(int i=2;i<mxN;i++)inv[i]=mod-mod/i*inv[mod%i]%mod;
    f1[0]=f2[0]=1;
    for(int i=1;i<mxN;i++)f1[i]=(f1[i-1]*i)%mod,f2[i]=(f2[i-1]*inv[i])%mod;
}
ll ncr(int n,int r)
{
    inverse();
    if(n<r)return 0;
    ll res=f1[n];
    res=(res*f2[n-r])%mod;
    res=(res*f2[r])%mod;
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        cout<<ncr(n,m)<<endl;
    }
    return 0;
}
