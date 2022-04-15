#include <bits/stdc++.h>
using namespace std;
const int MAX = 1024 * 3 +2;
char board[MAX][MAX*2];

void astro(int x, int y){
    board[x][y] ='*';
    board[x+1][y-1] = '*';
    board[x+1][y+1] = '*';
    for(int i=y-2;i<=y+2;i++){
        board[x+2][i] = '*';
    }
}

void func(int star,int x, int y){
    if(star == 3){
        astro(x,y);
        return;
    }

    int n = star/2;
    func(n,x,y);
    func(n,x+n,y-n);
    func(n,x+n,y+n);
}
//별찍기 - 11
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        fill(board[i],board[i]+n*2-1,' ');
    }

    func(n,0,n-1);
    for(int  i=0;i<n;i++){
        for(int j=0;j<n*2-1;j++){
            cout << board[i][j];
        }
        cout << '\n';
    }

    return 0;
}