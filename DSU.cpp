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
const int mxn=1e6+2,mod=1e9+7;
int par[mxn],rnk[mxn];
void refresh()
{
    for(int i=1;i<=mxn;i++)par[i]=i,rnk[i]=1;
}
int find(int n)
{
    return par[n]==n?n:find(par[n]);
}
void merge(int a,int b)
{
    a=find(a),b=find(b);
    /*if(a==b)return;
    if(rnk[a]<rnk[b])swap(a,b);
    rnk[a]+=rnk[b];*/
    par[b]=a;
}
int32_t main()
{

    //fast;
    w(t)
    {
        int n;
        cin>>n;
        refresh();
        int a,b;
        for(int i=1;i<=n;i++)cin>>a>>b,merge(a,b);

    }
}
