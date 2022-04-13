#include <bits/stdc++.h>
using namespace std;
//쿼드트리
int n;
string board[65];
//같으면 true
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
        cout << board[x][y];
        return;
    }else{
        cout << '(';
    }
    int n=z/2;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            func(x+i*n,y+j*n,n);
        }
    }
    cout << ')';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> board[i];
    }

    func(0,0,n);

    return 0;
}

/* 
흑백 영상을 압축하여 표현 쿼드 트리
2차원 배열에서 같은 숫자의 점들이 한 곳에 많이 몰려있으면, 쿼드 트리에서는 이를 압축하여 표현.
0과 1이 섞여 있으면 전체를 한번에 나타내지 못하고 왼쪽 위, 오른쪽위, 왼쪽 아래, 오른쪽 아래 
차례대로ㅛ 괄호안에 묶어서 표현
 */