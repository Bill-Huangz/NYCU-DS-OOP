#include <iostream>
using namespace std;
int n,m;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
char dd[]={'N','E','S','W'};
int x,y,d;char c;string s;
int off[100][100]{};
void sol(){

    if (c=='N') d=0;
    if (c=='E') d=1;
    if (c=='S') d=2;
    if (c=='W') d=3;

    for (char i:s){
        if (i=='L'){
            d=(d-1+4)%4;
        }
        if (i=='R'){
            d=(d+1)%4;
        }
        if (i=='F'){
            x+=dx[d];
            y+=dy[d];
        }
        if (x<0){
            if (off[x+1][y]) {
                x++;
                continue;
            }
            cout <<x+1<<' '<<y<<' '<<dd[d];
            off[x+1][y]=1;
            cout <<" LOST\n";
            return;
        }
        else if (x>n){
            if (off[n][y]){
                x--;
                continue;
            }
            cout <<n<<' '<<y<<' '<<dd[d];
            off[n][y]=1;
            cout <<" LOST\n";
            return;
        }
        else if (y<0){
            if (off[x][0]){
                y++;
                continue;
            }
            cout <<x<<' '<<0<<' '<<dd[d];
            off[x][0]=1;
            cout <<" LOST\n";
            return;
        }
        else if (y>m){
            if (off[x][m]){
                y--;
                continue;
            }
            cout <<x<<' '<<m<<' '<<dd[d];
            off[x][m]=1;
            cout <<" LOST\n";
            return;
        }
    }
    cout <<x<<' '<<y<<' '<<dd[d]<<"\n";
}

int main()
{
    cin >>n>>m;
    while (cin >>x>>y>>c>>s) sol();

    return 0;
}
