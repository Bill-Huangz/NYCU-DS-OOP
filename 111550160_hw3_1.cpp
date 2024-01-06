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

int op1[N],op2[N];
int n;
int stc(){
    stack<int> st;
    for (int i=1;i<=n;i++){
        if (op1[i]==1){
            st.push(op2[i]);
        }
        else{
            if (st.empty()||st.top()!=op2[i]) return 0;
            else st.pop();
        }
    }
    return 1;
}
int q(){
    queue<int> st;
    for (int i=1;i<=n;i++){
        if (op1[i]==1){
            st.push(op2[i]);
        }
        else{
            if (st.empty()||st.front()!=op2[i]) return 0;
            else st.pop();
        }
    }
    return 1;
}
int pq(){
    priority_queue<int,vector<int>,less<int>> st;
    for (int i=1;i<=n;i++){
        if (op1[i]==1){
            st.push(op2[i]);
        }
        else{
            if (st.empty()||st.top()!=op2[i]) return 0;
            else st.pop();
        }
    }
    return 1;
}


void sol(){
    //cin >>n;
    for (int i=1;i<=n;i++){
        cin >>op1[i]>>op2[i];
    }

    if (stc()+q()+pq()==0){
        cout <<"impossible\n";
    }
    else if (stc()+q()+pq()>1){
        cout <<"not sure\n";
    }
    else if (stc()){
        cout <<"stack\n";
    }
    else if (q()){
        cout <<"queue\n";
    }
    else if (pq()){
        cout <<"priority queue\n";
    }
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
