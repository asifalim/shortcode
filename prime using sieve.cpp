#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define dbg(a,b,c) cout<<a<<"  "<<b<<"  "<<c<<endl;
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
#define INF 1e18
#define w(t) cin>>t;while(t--)
#define kill(a) {cout<<a<<endl;continue;}
#define pi  2 * acos(0.0)
int t,ans=0,tot=0,k=0;
const int mxN=1e7,mod=1e9+7;
bool vis[mxN];
vector<int>prime;
void sieve()
{
    vis[1]=1;
    for(int i=2;i*i<mxN;i++)
    if(!vis[i]){prime.push_back(i);for(int j=i*i;j<mxN;j+=i)vis[j]=1;}
}
signed main()
{
    sieve();
    //fast;
    //w(t)
    //{
        int n,m,a,b,c,d,e,i,j=0,sm=0,sm1=0,cn=0,cn1=0,mx=INT_MIN,mn=INT_MAX,mx1;
        string s,ss,sr;
        bool f=true,ff=false;

   // }
    return 0;
}
