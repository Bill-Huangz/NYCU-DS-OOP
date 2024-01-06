#include <bits/stdc++.h>
#define int long long
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
//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC optimize("O2")
int max(int x,int y){return x>=y?x:y;}
int min(int x,int y){return x>=y?y:x;}
using namespace std;
typedef long long ll; 
const int N=200005;
const int M=100005;
const int MOD=1000000007;//998244353;
const ll INF=9223372036854775807;//2147483647;
const double PI=acos(-1);
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<double,int> pdi;

int a[105][105];
char c;int n,T;
void sol(){
    cin >>c>>c>>n;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            cin >>a[i][j];
    int ok=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++){
            if (a[i][j]<0) ok|=1;
            if (a[i][j]!=a[n-i-1][n-j-1]) ok|=2;
        }
    if (!ok) cout <<"Test #"<<++T<<": Symmetric.\n";
    else cout <<"Test #"<<++T<<": Non-symmetric.\n";
}
signed main(){
    Nanase_Kurumi_aka_menhera_chan_is_mine
    //srand(time(NULL));
    int _=1;
    cin >>_;
    while (_--) sol();
    //while (cin >>n&&n) sol();

    return 0;
}
