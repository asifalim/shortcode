#include<bits/stdc++.h>
using namespace std;
const int mxN=1e6+4;
int cnt[mxN];
void divcount()
{
    for(int i=1;i<mxN;i++)cnt[i]=1;
    for(int i=2;i<mxN;i++)for(int j=i;j<mxN;j+=i)cnt[j]++;
}
int main()
{
    divcount();
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n;
        cout<<cnt[n]<<endl;
    }
}
