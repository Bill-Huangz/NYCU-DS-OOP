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

int n,d;
int a[N],cnt[205];
void sol(){
    cin >>n>>d;
    for (int i=1;i<=n;i++) cin >>a[i];
    for (int i=1;i<=d;i++)
        cnt[a[i]]++;
    int ans=0;
    for (int i=d+1,med;i<=n;i++){
        if (d%2==0){
            int m1,m2,c=d/2;
            for (m1=0;m1<=200;m1++){
                if (c-cnt[m1]<=0)
                    break;
                else c-=cnt[m1];
            }
            c=d/2+1;
            for (m2=0;m2<=200;m2++){
                if (c-cnt[m2]<=0)
                    break;
                else c-=cnt[m2];
            }
            med=m1+m2;
        }
        else{
            int c=d/2;
            for (med=0;med<=200;med++)
                if (c-cnt[med]<0)
                    break;
                else c-=cnt[med];
            med*=2;
        }

        if (a[i]>=med) ans++;//,cout <<med<<' ';
        cnt[a[i]]++;
        cnt[a[i-d]]--;
    }
    cout <<ans<<'\n';
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