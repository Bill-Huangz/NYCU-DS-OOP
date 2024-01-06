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
 
struct BST{
    struct Node{
        Node *fa,*l,*r;
        int val;
        Node (int _val,Node *_fa):
            val(_val),fa(_fa),l(nullptr),r(nullptr){}
    };
    Node* root=nullptr;

    Node* ins(Node* cur,Node *p,int x){
        if (!cur){
            cur=new Node(x,p);
            return cur;
        }
        if (cur->val<=x){
            cur->r=ins(cur->r,cur,x);
        }
        else {
            cur->l=ins(cur->l,cur,x);
        }
        return cur;
    }
    void ins(int x){
        root=ins(root,nullptr,x);
    }

    bool srch(Node *cur,int x,int typ){
        if (!cur) return 0;
        if (typ) {
            if (cur!=root) cout <<" ";
            cout <<cur->val;
        }
        if (cur->val==x) {
            return 1;
        }
        if (cur->val<x){
            return srch(cur->r,x,typ);
        } 
        else return srch(cur->l,x,typ);
    }
    void srch(int x){
        if (!srch(root,x,1)){ 
            if (root) cout <<" ";
            cout <<"not found";
        }
        cout <<"\n"; 
    }

    void trans(Node *&cur) {
        if(cur->l && cur->r)
            return;
        Node *tmp = (cur->l ? cur->l : cur->r);
        if(cur == root) {
            root = tmp;
            root->fa = NULL;
            delete cur; 
        }
        else if(cur->fa->l == cur) {
            cur->fa->l = tmp;
            if(tmp)
                tmp->fa = cur->fa;
            delete cur;
        }
        else if(cur->fa->r == cur) {
            cur->fa->r = tmp;
            if(tmp)
                tmp->fa = cur->fa;
            delete cur;
        }
    }
    Node *del(Node *cur,int x){
        if (cur->val==x){
            if (!cur->l&&!cur->r){
                delete cur;
                return nullptr;
            }
            else if (cur->r){
                Node *tmp=cur->r;
                while (tmp->l) tmp=tmp->l;
                cur->val=tmp->val;
                trans(tmp);
            }
            else{
                Node *tmp=cur->l;
                while (tmp->r) tmp=tmp->r;
                cur->val=tmp->val;
                trans(tmp);
            }
            return cur;
        }
        else if (cur->val<x) cur->r=del(cur->r,x);
        else cur->l=del(cur->l,x);
        return cur;
    }
    void del(int x){
        if (!srch(root,x,0)) cout <<"not found\n";
        else {
            root=del(root,x);
        }
    }
};
void sol(){
    string s; int x; 
    BST tr;
    
    while (cin >>s>>x){ 
        if (s[0]=='a') tr.ins(x); 
        else if (s[0]=='s') tr.srch(x);
        else tr.del(x); 
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
