#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define dbg(a,b,c,d) cerr<<a<<"  "<<b<<"  "<<c<<"  "<<d<<endl;
#define kill(a) {cout<<a<<endl;continue;}
#define KILL(a) {cout<<a<<endl;return 0;}
#define debug cerr<<"Error Found"<<endl;
#define mem(a,b) memset(a,b,sizeof(a))
#define lcm(a, b) (a/__gcd(a,b))*b
#define w(t) cin>>t;while(t--)
#define pi  2 * acos(0.0)
#define ll long long int
#define endl "\n"
#define INF (1LL<<61)
int t,cs=0;
const int mxn=1e5+2,mod=1e9+7;
int fact[mxn];
void fac(int md)
{
    fact[0]=fact[1]=1;
    for(int i=2; i<mxn; i++)fact[i]=1LL*fact[i-1]*i%md;
}
vector<int>run(int64_t n,int md)
{
    vector<int>v;
    while(n)
    {
        v.push_back(n%md);
        n/=md;
    }
    return v;
}
int power(int64_t base,int po,int md)
{
    int res=1;
    while(po)
    {
        if(po&1)res=1LL*res*base%md;
        base*=base,base%=md,po/=2;
    }
    return res;
}
int ncr(int n,int r,int md)
{
    if(r>n)return 0;
    int res=fact[n];
    res=1LL*res*power(fact[n-r],md-2,md)%md;
    res=1LL*res*power(fact[r],md-2,md)%md;
    return res;
}
int lucus(int64_t n,int64_t r,int md)
{
    if(r>n)return 0;
    vector<int>N=run(n,md),R=run(r,md);
    int sz=R.size();
    int ans=1;
    for(int i=0; i<sz; i++)ans=1LL*ans*ncr(N[i],R[i],md)%md;
    return ans;
}
int32_t main()
{

    //fast;
    w(t)
    {
        int64_t n,k;
        int p;
        cin>>n>>k>>p;
        fac(p);
        cout<<solve(n,k,p)<<endl;
    }
}
