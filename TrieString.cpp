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
#define INF 1e18
int t,cs=0;
const int mxn=1e6+2,mod=1e9+7;
struct trie
{
    trie* child[26];
    int value=0;
    trie()
    {
        value=0;
        for(int i=0; i<26; i++)child[i]=0;
    }
};
trie* root=new trie();
void insert(string s)
{
    trie* temp=root;
    for(int i=0; i<s.size(); i++)
    {
        if(temp->child[s[i]-'a']==NULL)temp->child[s[i]-'a']=new trie();
        temp=temp->child[s[i]-'a'];
        temp->value++;
    }
}
int search(string s)
{
    trie* temp=root;
    int len=0;
    for(int i=0; i<s.size(); i++)
    {
        if(temp->child[s[i]-'a']==NULL)break;
        temp=temp->child[s[i]-'a'];
        if(temp->value==1)break;
        len++;
    }
    return len;
}

//ANOTHER WAY-------------------->


void insert(string s)
{
    int cur=0;
    for(int i=0;i<s.size();i++)
    {
        if(!dp[cur][s[i]-'a'])dp[cur][s[i]-'a']=++sz;
        backtrack[cur][s[i]-'a']++;
        cur=dp[cur][s[i]-'a'];
    }
}
int search(string s)
{
    int cur=0,len=0;
    for(int i=0;i<s.size();i++)
    {
        if(!dp[cur][s[i]-'a'] or backtrack[cur][s[i]-'a']==1)break;
        cur=dp[cur][s[i]-'a'];
        len++;
    }
    return len;
}


signed main()
{

    //fast;
    //w(t)
    //{
    int n;
    cin>>n;
    string str[n];
    for(int i=0; i<n; i++)cin>>str[i],insert(str[i]);
    for(int i=0;i<n;i++)cout<<search(str[i])<<endl;
             //INPUT--->asif, asik, as, sa
             //OUTPUT--->3, 3, 2, 0
             //HINT--->prefix matching
    // }
}
