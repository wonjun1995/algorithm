#include <bits/stdc++.h>
using namespace std;

int board[1002][1002];
int vis[1002][1002];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

//토마토
//보관 후 하루가 지나면, 익은 토마토들의 인접한 곳에 있는 익지 않은 토마토들은 익은 토마토의 영향을 받아 익게 됨.
//토마토의 인접한 곳은 동서남북 네 방향에 있는 토마토.
//대각선 방향의 토마토는 영향을 주지 않음   저절로 익는 경우는 없음.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //며칠이 지나면 토마토들이 모두 익는지, 그 최소 일수를 구하는 프로그램을 작성해라.
    //단, 상자의 일부 칸에는 토마토가 들어있지 않을 수도 있음.
    //1: 익은 토마토 0: 익지 않은 토마토 -1: 토마토가 들어있지 않은 칸

    int m,n;
    cin >> m >> n;

    queue<pair<int,int>> Q;
    //시작점이 여러개일 경우가 있음.
    for(int i=0;i<n;i++){
        for(int j =0; j<m;j++){
            cin >> board[i][j];
            if(board[i][j]==1){
                Q.push({i,j});
            }
            if(board[i][j]==0){
                vis[i][j]= -1;
            }
        }
    }
    /* cout <<"================\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << board[i][j] <<' ';
        }
        cout <<'\n';
    }
    cout <<"================\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << vis[i][j] <<' ';
        }
        cout <<'\n';
    } */

    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int dir=0;dir < 4;dir++){
            int nx=cur.first+dx[dir];
            int ny=cur.second+dy[dir];
            if(nx<0||nx>=n || ny<0 || ny>=m) continue;
            if(vis[nx][ny] >= 0) continue;
            vis[nx][ny] = vis[cur.first][cur.second]+1;
            Q.push({nx,ny});
        }
    }

    int val=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]== -1){
                cout << -1;
                return 0;
            }
            val= max(val,vis[i][j]);
        }
    }
    cout << val << '\n';

    return 0;
}