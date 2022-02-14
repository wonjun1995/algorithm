#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int x;
    int y;
    cin >> x >> y;
    int board[502][502];
    bool visit[502][502];

    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};

    for(int i=0; i<x;i++){
        for (int j=0;j < y; j++){
            cin >> board[i][j];
        }
    }
    int num=0;
    int max_width=0;
    //board 돌면서 bfs로 그림 갯수 확인 및 그림의 크기 확인
    for(int i=0; i < x; i++){
        for(int j=0; j < y; j++){
            //그림갯수 증가
            if(board[i][j]==0 || visit[i][j]) continue;
            num++;
            queue<pair<int,int>> Q;
            visit[i][j]=1;
            Q.push({i,j});
            //그림의 최대 크기는 어떻게 구함? 
            //큐가 빌때까지 pop의 건수 
            int temp_width = 0;
            while (!Q.empty()){
                temp_width++;
                pair<int,int> cur = Q.front();
                Q.pop();
                for(int dir=0; dir < 4; dir++){
                    int nx=cur.first + dx[dir];
                    int ny=cur.second + dy[dir];
                    if(nx < 0 || nx >= x || ny < 0 || ny >= y ) continue;
                    if(visit[nx][ny] || board[nx][ny] != 1)continue;
                    visit[nx][ny] = 1;
                    Q.push({nx,ny});
                }
            }
            max_width = max(max_width,temp_width);
        }
    }
    cout << num << '\n' << max_width << '\n';
}