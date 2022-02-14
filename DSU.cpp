#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define dbg(a,b,c) cerr<<a<<"  "<<b<<"  "<<c<<endl;
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
#define INF 1e18
#define w(t) cin>>t;while(t--)
#define kill(a) {cout<<a<<endl;continue;}
#define pi  2 * acos(0.0)
int t,ans=0,tot=0,kk=0;
const int mxn=1e5+3,mod=1e9+7;
int par[mxn];
int find(int a)
{
    return (par[a]<0?a:find(par[a]));
}
void merge(int a,int b)
{
    if((a=find(a))==(b=find(b)))return;
    if(par[a]>par[b])swap(a,b);
    par[a]+=par[b];
    par[b]=a;
}
signed main()
{
    //fast;
   // w(t)
    //{
        ll n,m,a,b,c,d,e,i,j,k,sm=0,sm1=0,cn=0,cn1=0,mx=-1e9,mn=1e9;
        string s,ss,sr;
        bool f=true;
        cin>>n>>m;fill(par,par+n+1,-1);
        for(i=1;i<=m;i++)cin>>a>>b,merge(a,b);
        for(i=1;i<=n;i++)cout<<par[i]<<" ";cout<<endl;
    //}
}
