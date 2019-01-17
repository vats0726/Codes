#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ldb;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define db(x) #x<<" "<<(x)<<" "
#define nl '\n'
#define PI 3.14159265
#define all(x) x.begin(),x.end()
#define sz(x) (int)(x).size()
#define mem(a,val) memset(a,val,sizeof(a))


const int MAX = 1e5+1;
const ll  INF = 1e18;
const int MOD = 1e9+7;
const int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
const int N=1e5+5;

/************************DFS******************************/
bool vis[N];
vector<int> v[N];
void dfs(int s)
{   vis[s]=1;
    for(auto i:v[s])
    {
        if(!vis(v[s][i]))
        {  dfs(i);}
    }
}
/**********************************************************/


/***************Hashing_Using_Maps*************************/
map<int,int> om;
int omele=0;
void hmap(int ar[],int n)
{ int cnt=0;
  rep(0,n-1)
  {
      om[ar[i]]++;
     if(om[ar[i]]==1)
      omele++;
  }
}
/***********************************************************/

int main()
{   fastio;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {   int x,y;
        cin>>x>>y;
        v[x].pb(y);
        v[Y].pb(x);
    }

    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        dfs(i);
    }


}
