#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define dbg(a,b,c,d) cerr<<a<<"  "<<b<<"  "<<c<<"  "<<d<<endl;
#define debug cerr<<"Error Found"<<endl;
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
#define INF 1e18
#define w(t) cin>>t;while(t--)
#define kill(a) {cout<<a<<endl;continue;}
#define pi  2 * acos(0.0)
#define lcm(a, b) (a/__gcd(a,b))*b
int t,ans=0,tot=0;
const int mxn=1e5+1,mod=1e9+7;
ll tree[mxn*4];
void build(int st,int ed,int node)
{
    if(st==ed)return void(tree[node]=ar[st]);      //set node value
    int mid=(st+ed)>>1;
    build(st,mid,node*2);
    build(mid+1,ed,node*2+1);
    tree[node]=tree[node*2]+tree[node*2+1];       //logic here
}
void update(int st,int ed,int l,int val,int node)
{
    if(st>l or ed<l)return;
    if(st==ed)return void(tree[node]=ar[val]);    //update node value
    int mid=(st+ed)>>1;
    update(st,mid,l,val,node*2);
    update(mid+1,ed,l,val,node*2+1);
    tree[node]=tree[node*2]+tree[node*2+1];       //logic here
}
ll query(int st,int ed,int l,int r,int node)
{
    if(st>r or ed<l)return 0;
    if(st>=l and ed<=r)return tree[node];         //return desire value
    int mid=(st+ed)>>1;
    return query(st,mid,l,r,node*2)+query(mid+1,ed,l,r,node*2+1);       //logic here
}
signed main()
{
    //fast;
    //w(t)
   // {
        int n,m,a,b,c,d,e,i,j,k,sm=0,sm1=0,cn=0,cn1=0,mx=-1e9,mn=1e9;
        string s,sr,sa,ss;
        bool f=false,ff=false;
        cin>>n;
        build(1,n,1);

    //}
}
