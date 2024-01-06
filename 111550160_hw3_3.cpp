#include <bits/stdc++.h>
//#define int long long
#define double long double
#define Nanase_Kurumi_aka_menhera_chan_is_mine ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define ALL(i) i.begin(),i.end()
#define gcd(i,j) __gcd(i,j)
#define fi first
#define se second
//#define X first
//#define Y second
#define eps 0.00000001
#define ist insert
//#define mul(a,b,c) (a%c)*(b%c)%c
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC optimize("O2")
int max(int x,int y){return x>=y?x:y;}
int min(int x,int y){return x>=y?y:x;}
using namespace std;
typedef long long ll;
const int N=1005;
const int M=1000005;
const int MOD=1000000007;//998244353;
const ll INF=9223372036854775807;//2147483647;
const double PI=acos(-1);
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<double,int> pdi;

int n,m,ok;
vector<int> e[N];
int c[N];
void dfs(int v,int x){
    if (c[v]!=0&&c[v]!=x) {
        ok=0;
        return;
    }
    if (c[v]==x) return;
    c[v]=x;
    for (int i:e[v]){
        dfs(i,x%2+1);
    }
}
void sol(){
    cin >>m;
    for (int i=0;i<=n;i++) e[i].clear();
    memset(c,0,sizeof(c));
    for (int i=0,x,y;i<m;i++){
        cin >>x>>y;
        e[x].pb(y);
        e[y].pb(x);
    }
    ok=1;
    for (int i=0;i<n;i++){
        if (!c[i])
            dfs(i,1);
    }
    if (ok) {
        cout <<"BICOLORABLE.\n";
    }
    else {
        cout <<"NOT BICOLORABLE.\n";
    }
}
signed main(){
    Nanase_Kurumi_aka_menhera_chan_is_mine
    //srand(time(NULL));
    int _=1;
    //cin >>_;
    while (cin >>n&&n) sol();
    //while (cin >>n&&n) sol();

    return 0;
}
