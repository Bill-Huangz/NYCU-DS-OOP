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
const int N=1000005;
const int M=1000005;
const int MOD=998244353;//1000000007;
const ll INF=9223372036854775807;//2147483647;
const double PI=acos(-1);
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<double,int> pdi;

string s[10];
int n=9;
int cnt[10];
bool v1(){
    
    for (int i=0;i<n;i++){
        memset(cnt,0,sizeof(cnt));
        for (int j=0;j<n;j++)
            if (s[i][j]!='x')
                if (cnt[s[i][j]-'0']==1) return 0;
                else cnt[s[i][j]-'0']=1;
    }
    return 1;
}
bool v2(){
    for (int i=0;i<n;i++){
        memset(cnt,0,sizeof(cnt));
        for (int j=0;j<n;j++)
            if (s[j][i]!='x')
                if (cnt[s[j][i]-'0']==1) return 0;
                else cnt[s[j][i]-'0']=1;
    }
    return 1;
}
bool v3(){
    for (int i=0;i<3;i++)for (int j=0;j<3;j++){
        memset(cnt,0,sizeof(cnt));
        for (int x=0;x<3;x++) for (int y=0;y<3;y++){
            if (s[i*3+x][j*3+y]!='x'){
                if (cnt[s[i*3+x][j*3+y]-'0']==1) return 0;
                else cnt[s[i*3+x][j*3+y]-'0']=1;
            }
        }
    }
    return 1;
}
void sol(){
    for (int i=0;i<n;i++) cin >>s[i];
    if (v1()&&v2()&&v3()) cout <<"true\n";
    else cout <<"false\n";
}
signed main(){
    Nanase_Kurumi_aka_menhera_chan_is_mine
    //srand(time(NULL));
    int _=1;
    //cin >>_;
    while (_--) sol();
    //while (cin >>n&&n) sol();

    return 0;
}
/*

xxxxxx86x
6x7x1xx4x
x5xx83xxx
4xxxxxxx1
x3xxx4x1x
x6x5xxx3x
3xxxxxx29
xxxx56xxx
xx6x4x1x8

*/