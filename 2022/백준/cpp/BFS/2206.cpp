#include <bits/stdc++.h>
using namespace std;

int vis[1002][1002][2];
char board[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

//벽 부수고 이동하기
//N x M행렬의 맵이 있음.
// 0 은 이동할 수 있는 곳 , 1은 이동할 수 없는 벽이 있는 곳을 가리킴.
//(1,1) -> (N,M) 의 위치로 이동하려 하는데 최단경로로 이동할 예정
//시작하는 칸과 끝나는 칸도 포함해서 센다.
//만약 이동하는 도중 한 개의 벽을 부수고 이동하는 것이 좀 더 경로가 짧아진다면, 벽을 한 개까지 부수고 이동하여도 됨.  
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<tuple<int,int,int>> Q;

    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vis[i][j][0] = -1;
            vis[i][j][1] = -1;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> board[i][j];
        }
    }

    vis[0][0][0] = 1;
    vis[0][0][1] = 1;
    Q.push({0,0,0});

    while (!Q.empty())
    {
        auto cur = Q.front();Q.pop();
        if(get<0>(cur) == n-1 && get<1>(cur) == m-1) cout << vis[n-1][m-1][get<2>(cur)];

        for(int dir=0;dir < 4; dir++){
            int nx = get<0>(cur) +dx[dir];
            int ny = get<1>(cur) + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
             int temp = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] +1;
            //벽을 안부술 때
            if(board[nx][ny] != '1' && vis[nx][ny][get<2>(cur)] == -1 ){
                vis[nx][ny][get<2>(cur)] = temp;
                Q.push({nx,ny,get<2>(cur)});
            }
            //벽을 부술 떄
            if(!get<2>(cur) && board[nx][ny] == '1' && vis[nx][ny][get<2>(cur)] == -1 ){
                vis[nx][ny][1] = temp;
                Q.push({nx,ny,1});
            }
        }
    }

    

    return 0;
}