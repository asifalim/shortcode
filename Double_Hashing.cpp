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
const int mxn=1e6+3,mod1=1e9+7,mod2=1e9+9;
const int base1=131,base2=277;
int64_t pw1[mxn],hs1[mxn],hs2[mxn],pw2[mxn];
int64_t power(int64_t base,int64_t po,int64_t mod)
{
    int64_t res=1;
    while(po)
    {
        if(po&1)res*=base,res%=mod;
        po/=2,base*=base,base%=mod;
    }
    return res;
}
void getpower()
{
    pw1[0]=1,pw2[0]=1;
    for(int i=1;i<mxn;i++)pw1[i]=pw1[i-1]*base1%mod1,pw2[i]=pw2[i-1]*base2%mod2;
}
void gethash(string &s)
{
    hs1[0]=hs2[0]=s[0];
    for(int i=1;i<(int)s.size();i++)hs1[i]=(hs1[i-1]*base1+s[i])%mod1,hs2[i]=(hs2[i-1]*base2+s[i])%mod2;
}
pair<int64_t,int64_t>rangehash(int l,int r)
{
    if(r<l)return {0,0};
    if(!l)return {hs1[r],hs2[r]};
    int64_t a=(hs1[r]-(hs1[l-1]*pw1[r-l+1])%mod1+mod1)%mod1;
    int64_t b=(hs2[r]-(hs2[l-1]*pw2[r-l+1])%mod2+mod2)%mod2;
    return {a,b};
}
signed main()
{
    getpower();
    w(t)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        gethash(s);
        cout<<rangehash(0,n-1).first<<" "<<rangehash(0,n-1).second<<endl;
    }
}
