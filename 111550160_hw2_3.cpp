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
const int N=105;
const int M=1000005;
const int MOD=1000000007;//998244353;
const ll INF=9223372036854775807;//2147483647;
const double PI=acos(-1);
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<double,int> pdi;

int n;
void sol(){
    if (n==1){
        int x;
        cin >>x;x*=-1;
        cout <<"x ";
        if (x<0){
            cout <<"- "<<-x<<" = 0";
        }
        else cout <<"+ "<<x<<" = 0";
        cout <<"\n";
        return;
    }
    vector<int> c;
    c.resize(105,0);
    c[0]=1;
    for (int i=0,x;i<n;i++){
        cin >>x;x*=-1;
        vector<int> b(105,0);
        for (int i=0;i<105;i++)
            b[i]=c[i]*x;
        for (int i=1;i<105;i++)
            b[i]+=c[i-1];
        c=b;
    }
    int fi=1;
    for (int i=104;i>=2;i--){
        if (c[i]!=0){
            if (fi){
                if (c[i]==1) cout <<"x^"<<i<<' ';
                fi=0;
            }
            else {
                if (c[i]==-1) cout <<"- x^"<<i<<' ';
                else if (c[i]==1) cout <<"+ x^"<<i<<' ';
                else if (c[i]<0) cout <<"- "<<-c[i]<<"x^"<<i<<' ';
                else cout <<"+ "<<c[i]<<"x^"<<i<<' ';
            }
        }
    }
    if (c[1]==1){
        cout <<"+ x ";
    }
    else if (c[1]==-1) cout <<"- x ";
    else if (c[1]>0) cout <<"+ "<<c[1]<<"x ";
    else if (c[1]<0) cout <<"- "<<-c[1]<<"x ";

    if (c[0]<0){
        cout <<"- "<<-c[0]<<' ';
    }
    else cout <<"+ "<<c[0]<<' ';

    cout <<"= 0\n";
}
signed main(){
    Nanase_Kurumi_aka_menhera_chan_is_mine
    //srand(time(NULL));
    int _=1;
    //cin >>_;
    while (cin >>n) sol();
    //while (cin >>n&&n) sol();

    return 0;
}  
