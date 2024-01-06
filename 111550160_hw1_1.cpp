#include <iostream>
using namespace std;
int main()
{
    int l,r;
    while (cin >>l>>r){
        cout <<l<<' '<<r<<' ';
        if (l>r) swap(l,r);
        int mx=0;
        for (int i=l;i<=r;i++){
            int cnt=1,x=i;
            while (x!=1){
                cnt++;
                if (x%2==1) x=x*3+1;
                else x=x/2;
            }
            if (cnt>mx) mx=cnt;
        }
        cout <<mx<<'\n';
    }
    return 0;
}  
