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

int n;
struct I{
    int id,art,rnt;
    I(int _id,int _art,int _rnt):
        id(_id),art(_art),rnt(_rnt){}
    
} ;
struct cmp{
    bool operator()(const I& lh,const I& rh){
        return lh.rnt>rh.rnt;
    }
};
vector<I> a;

void sol(){
    int x,y,z; n=0;
    while (cin >>x>>y>>z){
        a.pb(I(x,y,z));
        n++;
    }
    sort(ALL(a),[](I lh,I rh){
        return lh.art<rh.art;
    });
    priority_queue<I,vector<I>,cmp> pq;
    int idx=0,pre=-1;
    for (int t=0;t<100000;t++){
        while (idx!=n&&a[idx].art==t){
            pq.push(a[idx++]);
        }
        if (pq.size()){
            I x=pq.top();pq.pop();
            int id=x.id,rnt=x.rnt,art=x.art;
            if (id!=pre) cout <<id<<"\n",pre=id;
            if (rnt!=1) pq.push(I(id,art,rnt-1));
        }
    }
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