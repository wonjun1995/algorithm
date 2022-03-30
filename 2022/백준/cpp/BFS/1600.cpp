#include <bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int hdx[8]={1,2,2,1,-1,-2,-2,-1};
int hdy[8]={2,1,-1,-2,-2,-1,1,2};
int board[202][202];
int vis[202][202];
//말이 되고 싶은 원숭이
//말은 격자판에서 체스의 나이트와 같은 이동방식을 가짐.
//원숭이는 능력이 부족해서 총 k번만 위와 같이 움직일 수 있고 그 외에는 그냥 인접한 칸으로만 움직임.
//격자판의 맨 왼쪽 위 -> 맨 오른쪽 아래로 가야 함.
//인접한 네 방향으로 한 번 움직이는 것, 말의 움직임으로 한 번 움직이는 것 모두 한번의 동작.
//원숭이가 최소한의 동작으로 시작지점에서 도착지점까지 갈 수 있는 방법

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int,int>> Q;

    int k,w,h;
    cin >> k >> w >> h;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> board[i][j];
        }
    }
    cout << "================\n";
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << board[i][j];
        }
        cout << "\n";
    }
    for(int i=0;i<h;i++){
        fill(vis[i],vis[i]+w,-1);
    }

    //0,0에서 시작
    //0은 아무것도 없는 평지, 1은 장애물
    vis[0][0]=0;
    Q.push({0,0});

    //k번만큼 말처럼 움직일 수 있음.
    //k번이 끝난 후부터는 1씩 이동 가능


    return 0;
}