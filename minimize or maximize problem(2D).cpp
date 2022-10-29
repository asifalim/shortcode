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
int t,cs=1;
const int mxn=1e7+2,mod=1e9+7;
int64_t grid[100][100],dp[100][100];
int64_t run(int i,int j,int N,int M)
{
    if(i>=N or j>=M)return INF;
    if(i==N-1 and j==M-1)return grid[i][j];
    if(~dp[i][j])return dp[i][j];
    dp[i][j]=grid[i][j]+min(run(i,j+1,N,M),run(i+1,j,N,M));
    return dp[i][j];
}
signed main()
{

    //fast;
    w(t)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>grid[i][j];
        mem(dp,-1);
        cout<<run(0,0,n,m)<<endl;
    }
}
