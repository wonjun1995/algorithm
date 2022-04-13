#include <bits/stdc++.h>
using namespace std;
int n;
int board[130][130];
int cnt[2];
bool check(int x,int y,int n){
    for(int i=x;i<x+n;i++){
        for(int j=y;j<y+n;j++){
            if(board[x][y] != board[i][j]){
                return false;
            }
        }
    }
    return true;
}

void func(int x,int y,int z){
    if(check(x,y,z)){
        cnt[board[x][y]] +=1;
        return;
    }
    int n = z/2;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            func(x+i*n,y+j*n,n);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> board[i][j];
        }
    }
    func(0,0,n);
    for(int i=0;i<2;i++){
        cout << cnt[i] << '\n';
    }


    return 0;
}