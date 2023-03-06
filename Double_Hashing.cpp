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
const int mxn=1e6+3,mod=1e9+7;
const int mod1=1e9+7,mod2=1e9+9;
const int base1=131,base2=237;
int ip1,ip2;
pair<int64_t,int64_t>pw[mxn],ipw[mxn];
int64_t power(int64_t base,int64_t po,int64_t md)
{
    int64_t res=1;
    while(po)
    {
        if(po&1)res*=base,res%=md;
        base*=base,base%=md,po/=2;
    }
    return res;
}
void getpower()
{
    pw[0]= {1,1};
    for(int i=1; i<mxn; i++)
    {
        pw[i].first=1LL*pw[i-1].first*base1%mod1;
        pw[i].second=1LL*pw[i-1].second*base2%mod2;
    }
    ip1=power(base1,mod1-2,mod1),ip2=power(base2,mod2-2,mod2);
    ipw[0]= {1,1};
    for(int i=1; i<mxn; i++)
    {
        ipw[i].first=1LL*ipw[i-1].first*ip1%mod1;
        ipw[i].second=1LL*ipw[i-1].second*ip2%mod2;
    }
}
struct Hashing
{
    int n;
    vector<pair<int,int>>hs;
    Hashing(string s)
    {
        n=s.size();
        hs.push_back({1,1});
        for(int i=0; i<n; i++)
        {
            pair<int,int>p;
            p.first=(hs[i].first+1LL*pw[i].first*s[i]%mod1)%mod1;
            p.second=(hs[i].second+1LL*pw[i].second*s[i]%mod2)%mod2;
            hs.push_back(p);
        }
    }
    pair<int64_t,int64_t>gethash(int l,int r)
    {
        if(l>r)return {0,0};
        assert(l>=1 and r<=n and l<=r);
        pair<int,int>ans;
        ans.first=(hs[r].first-hs[l-1].first+mod1)*1LL*ipw[l-1].first%mod1;
        ans.second=(hs[r].second-hs[l-1].second+mod2)*1LL*ipw[l-1].second%mod2;
        return ans;
    }
};
signed main()
{
    getpower();
    w(t)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        Hashing h(s);
        cout<<h.gethash(1,n).first<<" "<<h.gethash(1,n).second<<endl;
    }
}
