#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mxn=1e6+4,mod=1e9+7;
int fact[mxn];
int power(int base,int po)
{
    int res=1;
    while(po)
    {
        if(po&1)res=1LL*res*base%mod;
        base=1LL*base*base%mod,po/=2;
    }
    return res;
}
void pre()
{
    fact[0]=1;
    for(int i=1;i<mxn;i++)fact[i]=1LL*fact[i-1]*i%mod;
}
int ncr(int n,int r)
{
    int res=fact[n];
    res=1LL*res*power(fact[n-r],mod-2)%mod;
    res=1LL*res*power(fact[r],mod-2)%mod;
    return res;
}
int main()
{
   pre();
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
