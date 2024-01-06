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
const int N=2005;
const int M=1000005;
const int MOD=1000000007;//998244353;
const ll INF=9223372036854775807;//2147483647;
const double PI=acos(-1);
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<double,int> pdi;

string s;
void sol(){
    cin >>s;
    int lh[2][2];
    memset(lh,0,sizeof(lh));
    int c=-87878787,mus=1,typ=0;
    for (char i:s){
        if (isdigit(i)){
            if (c==-87878787) c=0;
            c=c*10+(i-'0');
        }
        else if (i=='x'){

            if (c==-87878787) lh[typ][0]+=mus;
            else if (c!=-87878787)lh[typ][0]+=c*mus;
            c=-87878787;
        }
        else if (i=='-') {
            if (c!=-87878787)lh[typ][1]+=c*mus;
            c=-87878787;
            mus=-1;
        }
        else if (i=='+') {
            if (c!=-87878787)lh[typ][1]+=c*mus;
            mus=1;c=-87878787;
        }
        else if (i=='=') {
            if (c!=-87878787)lh[typ][1]+=c*mus;
            typ=1;c=-87878787;
            mus=1;
        }
    }if (c!=-87878787)lh[typ][1]+=c*mus;
    //cout <<lh[0][0]<<' '<<lh[0][1]<<' '<<lh[1][0]<<' '<<lh[1][1]<<'\n';
    if (lh[0][0]==lh[1][0]){
        cout <<((lh[0][1]==lh[1][1])?"IDENTITY\n":"IMPOSSIBLE\n");
    }
    else cout <<(lh[0][1]-lh[1][1])/(lh[1][0]-lh[0][0])<<'\n';
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
