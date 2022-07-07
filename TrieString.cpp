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
const int mxn=2e5+2,mod=1e9+7;
struct trie
{
    int value;
    int end;
    trie* child[27];
    trie()
    {
        value=0,end=false;
        for(int i=0;i<26;i++)child[i]=0;
    }
};
trie* root=new trie();
void insert(string s)
{
    trie* temp=root;
    for(int i=0;i<s.size();i++)
    {
        if(temp->child[s[i]-'a']==NULL)temp->child[s[i]-'a']=new trie();
        temp=temp->child[s[i]-'a'];
        temp->value++;
    }
    temp->end=true;
}
bool search(string s)
{
    int i;
    trie* temp=root;
    for(i=0;i<s.size();i++)
    {
        if(temp->child[s[i]-'a']==NULL)break;
        temp=temp->child[s[i]-'a'];
    }
    if(i!=s.size())return false;
    return temp->end;
}
signed main()
{

    //fast;
    w(t)
    {
        int n,m,a,b,c,d,e,i,j,k,sm=0,sm1=0,cn=0,cn1=0,mx=-1e9,mn=1e9;
        string s,sr,sa,ss;
        bool f=false,ff=true;
        root=new trie();
        cin>>s;
        insert(s);
        cin>>ss;
        if(search(ss))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
