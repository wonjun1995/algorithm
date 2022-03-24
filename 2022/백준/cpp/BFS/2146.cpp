#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int board[102][102];
int vis[102][102];
int dist[102][102];

queue<pair<int,int>> Q;
//다리 만들기
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> board[i][j];
        }
    }
    //섬에 번호를 먼저 메김.
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==0 || vis[i][j]) continue;
            cnt++;
            vis[i][j] =1;
            board[i][j] =cnt;
            Q.push({i,j});
            while(!Q.empty()){
                auto cur = Q.front();Q.pop();
                for(int dir=0;dir<4;dir++){
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if(board[nx][ny] == 0 || vis[nx][ny]) continue;
                    board[nx][ny] = cnt;
                    vis[nx][ny] = 1;
                    Q.push({nx,ny});
                }
            }
        }
    }
    //거리 값 초기화
    for(int i=0;i<n;i++){
        fill(dist[i],dist[i]+n,-1);
    }

    int answer=99999;
    //모든 육지 한칸마다 bfs를 하면서 board의 값이 다른 처음 nx,ny를 찾는 다리의 길이를 계산하고 min값으로 대체
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]!=0){
                Q.push({i,j});
                dist[i][j] = 0;
                bool exit = false;
                while(!Q.empty() && !exit){
                    auto cur = Q.front();Q.pop();
                    for(int dir=0;dir<4;dir++){
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if(nx < 0 || nx >=n || ny < 0 || ny >= n) continue;
                        if(dist[nx][ny] >= 0 || board[i][j] == board[nx][ny]) continue;
                        //거리 재기
                        if(board[nx][ny] != 0 && board[i][j] != board[nx][ny]){
                            answer = min(answer,dist[cur.first][cur.second]);
                            while(!Q.empty())Q.pop();
                            exit = true;
                            break;
                        }
                        dist[nx][ny] = dist[cur.first][cur.second]+1;
                        Q.push({nx,ny});
                    }
                }
                for(int i=0;i<n;i++){
                    fill(dist[i],dist[i]+n,-1);
                }
            }
        }
    }
    cout << answer;
    return 0;
}