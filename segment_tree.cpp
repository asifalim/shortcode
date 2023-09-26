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
const int mxn = 1e5+1,mod = 1e9 + 7;
int64_t tree[mxn * 4];
int ar[mxn];
void build(int st, int ed, int node)
{
    if(st == ed)return void(tree[node] = ar[st]);
    int mid = st + ed >> 1;
    build(st, mid, node * 2);
    build(mid + 1, ed, node * 2 + 1);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}
void update(int st, int ed, int node, int idx, int val)
{
    if(st > idx or ed < idx)return;
    if(st == ed)return void(tree[node] = val);
    int mid = st+ed >> 1;
    update(st, mid, node * 2, idx, val);
    update(mid + 1, ed, node * 2 + 1, idx, val);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}
int64_t query(int st, int ed, int node, int l, int r)
{
    if(st > r or ed < l)return 0;
    if(st >= l and ed <= r)return tree[node];
    int mid = st + ed >> 1;
    return query(st, mid, node * 2, l, r) + query(mid + 1, ed, node * 2 + 1, l, r);
}
signed main()
{
    //fast;
    //w(t)
   // {
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++)cin >> ar[i];
        build(1, n, 1);

    //}
}
