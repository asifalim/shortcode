#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mxN=1e6+4,mod=1e9+7;
ll fact[mxN],inv[mxN];
ll power(ll base,ll p)
{
    ll res=1;
    while(p)
    {
        if(p&1)res=(res*base)%mod;
        base=(base*base)%mod;p/=2;
    }
    return res;
}
void facto()
{
    fact[0]=1;
    for(int i=1;i<mxN;i++)fact[i]=(fact[i-1]*i)%mod;
  //for(int i=1;i<mxN;i++)inv[i]=power(fact[i],mod-2);
}
ll ncr(int n,int r)
{
    facto();
    if(n<r)return 0;
    ll res=fact[n];
    res=(res*power(fact[n-r],mod-2))%mod;
    res=(res*power(fact[r],mod-2))%mod;
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
