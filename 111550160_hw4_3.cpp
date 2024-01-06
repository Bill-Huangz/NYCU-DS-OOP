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
const int M=1000005;
const int MOD=998244353;//1000000007;
const ll INF=9223372036854775807;//2147483647;
const double PI=acos(-1);
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<double,int> pdi;
typedef pair<int,char> pic;

map<char,int> mp;
struct I{
    pic x;
    int l, r;
} a[N];
priority_queue<pii,vector<pii>,greater<pii>> pq;
map<char,string> trs;
void dfs(int v,string s){
    if (v==0) return;
    if (a[v].x.se!='/'){
        trs[a[v].x.se]=s;
    }
    dfs(a[v].l,s+"0");
    dfs(a[v].r,s+"1");
}
void sol(){
    string s;
    getline(cin,s);
    int tot=0;
    for (char i:s)
        /*if (isalpha(i))
            tot++,mp[tolower(i)]++,cout <<i;
        else if (isdigit(i))
            tot++,mp[i]++,cout <<i;*/
        if (i!='#')
            tot++, mp[i]++;
    int n=1;
    for (pair<char,int> x:mp){
        a[n].x.fi=x.se;
        a[n].x.se=x.fi;
        a[n].l=a[n].r=0;
        pq.push(pii{x.se,n});
        n++;
    }
    while (pq.size()>1){
        pii l=pq.top();pq.pop();
        pii r=pq.top();pq.pop();
        a[n].l=l.se;
        a[n].r=r.se;
        a[n].x={l.fi+r.fi,'/'};
        pq.push({l.fi+r.fi,n++});
    }
    dfs(n-1,"");
    int cnt=0;
    for (char i:s)
        if (i!='#')
            cnt+=trs[i].length();
    cout <<cnt<<" / "<<tot*8<<'\n';
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