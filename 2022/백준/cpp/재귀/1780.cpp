#include <bits/stdc++.h>
using namespace std;
/*  
3씩 나누면서 모든 배열이 같은 숫자인지 판별하고 아니면 func함수 살행 하면서 
count의 갯수를 리턴해줘서 더해주는 값을 결과값으로 보여주면 된다.
*/
int n;
int board[2189][2189];
int cnt[3];
bool check(int x,int y, int n){
    for(int i=x;i<x+n;i++){
        for(int j=y;j<y+n;j++){
            if(board[x][y] != board[i][j]){
                return false;
            }
        }
    }
    return true;
}

void func(int x, int y, int z){
    if(check(x,y,z)){
        cnt[board[x][y]+1] +=1;
        return;
    }
    int n= z/3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            func(x+i*n,y+j*n,n);
        }
    }
}

//만약 종이가 모두 같은 수로 되어 있다면 이 종이 그대로 사용
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
    for(int i=0;i<3;i++){
        cout << cnt[i] << '\n';
    }


    return 0;
}