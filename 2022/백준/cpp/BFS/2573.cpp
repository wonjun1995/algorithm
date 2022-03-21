#include <bits/stdc++.h>
using namespace std;

int board[302][302];
int visit[302][302];


//빙산
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> board[i][j];
        }
    }
    cout << "==========\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
    int count=0;
    //빙산을 녹이면서 분리되냐 안되냐를 두고 카운트해야함.
    while(true){
        //연도 더하기
        //빙산 1씩 빼기
        //빙산이 2개로 쪼개지는지 확인
        //쪼개지면 연도 출력
        //안 쪼개지면 다시 빙산 1씩 빼기부터 되돌기

    }



    return 0;
}