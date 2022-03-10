#include <bits/stdc++.h>
using namespace std;

string board[1002];
int f_dist[1002][1002];
int j_dist[1002][1002];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

//불!
//미로에서 일을 하는데 불이 나서 미로에서 탈출 해야함.
//지훈이의 위치와 불이 붙은 위치를 감안해서 지훈이가 불에 타기전에 탈출 가능한지에 대한 여부
//얼마나 빨리 탈출할 수 있는지 결정
//지훈이와 불은 매 분마다 한칸씩 수평 또는 수직으로 이동.
//불은 각 지점에서 네 방향으로 확산
//미로의 가장자리에 접한 공간에서 탈출
//지훈이와 불은 벽이 있는 공간은 통과 X
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int R,C;
    cin >> R >> C;

    for(int i=0;i<R;i++){
        cin >> board[i];
    }

    for(int i=0;i < R;i++){
        fill(f_dist[i],f_dist[i]+C,-1);
        fill(j_dist[i],j_dist[i]+C,-1);
    }

    queue<pair<int,int>> fq;
    queue<pair<int,int>> jq;
    
    //불 지훈 불 지훈
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(board[i][j]=='F'){
                fq.push({i,j});
                f_dist[i][j] = 0;
            }
            if(board[i][j]=='J'){
                jq.push({i,j});
                j_dist[i][j]= 0;
            }
        }
    }
    //불 BFS
    while(!fq.empty()){
        pair<int,int> cur = fq.front();fq.pop();
        for(int dir=0;dir < 4;dir++){
            int nx=cur.first+dx[dir];
            int ny=cur.second+dy[dir];
            if(nx<0||nx>=R || ny<0 || ny>=C) continue;
            if(f_dist[nx][ny] >= 0 || board[nx][ny]=='#') continue;
            f_dist[nx][ny] = f_dist[cur.first][cur.second]+1;
            fq.push({nx,ny});
        }
    }

/*     for(int i=0;i<R;i++){
        for(int j=0;j < C;j++){
            cout << f_dist[i][j]<<' ';
        }
        cout << '\n';
    } */

    //지훈 BFS
    //BFS하는데 시간에 대한 비교를 어떻게 할 것인가??
    //j가 f보다 작으면 이동가능?
    while(!jq.empty()){
        pair<int,int> cur=jq.front();jq.pop();
        for(int dir=0;dir<4;dir++){
            int nx=cur.first+dx[dir];
            int ny=cur.second+dy[dir];
            if(nx<0||nx>=R || ny<0 || ny>=C) {
                cout << j_dist[cur.first][cur.second]+1;
                return 0;
            }
            if(j_dist[nx][ny] >= 0 || board[nx][ny]=='#') continue;
            if(f_dist[nx][ny] != -1 && j_dist[cur.first][cur.second]+1 >= f_dist[nx][ny]) continue;
            j_dist[nx][ny] = j_dist[cur.first][cur.second]+1;
            jq.push({nx,ny});
        }
    }

    //불이 도달하기 전에 미로를 탈출 할 수 없는경우 IMPOSSIBLE 출력
    cout << "IMPOSSIBLE";
    return 0;
}