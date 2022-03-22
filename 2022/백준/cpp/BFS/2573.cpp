#include <bits/stdc++.h>
using namespace std;

int board[302][302];
int vis[302][302];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};



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
    //연도
    int year_count=0;
    //빙산을 녹이면서 분리되냐 안되냐를 두고 카운트해야함.
    while(true){
        
        
        //방문 초기화
        for(int i=0;i<n;i++){
            fill(vis[i],vis[i]+m,0);
        }

        //빙산이 2개로 쪼개지는지 확인
        int tmp_cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //보드가 0보다 크고 vis이 0인경우?
                if(board[i][j] != 0 && vis[i][j]==0){
                    queue<pair<int,int>> Q;
                    Q.push({i,j});
                    vis[i][j]=1;
                    while (!Q.empty())
                    {
                        auto cur = Q.front();Q.pop();
                        for(int dir=0;dir<4;dir++){
                            int nx = cur.first+dx[dir];
                            int ny = cur.second+dy[dir];
                            if(nx <0 || nx >=n || ny < 0 || ny >= m)continue;
                            if(board[nx][ny]==0 || vis[nx][ny] == 1) continue;
                            Q.push({nx,ny});
                            vis[nx][ny] = 1;
                        }

                    }
                    tmp_cnt++;
                }
            }
        }

        //쪼개지면 연도 출력
        if(tmp_cnt >=2){
            cout << year_count;
            break;
        }else if(tmp_cnt == 0){
            cout << 0;
            break;
        }

        //연도 더하기
        year_count++;


        //안 쪼개지면 다시 빙산 1씩 빼기부터 되돌기
        //빙산 0이 저장된 개수만큼 빼기
        //주변 바다에 접하는 수를 2차원 배열에 모아둿다가 한번에 빼야 함.
        // (힌트 중요)그렇지 않으면 순차적으로 0이 더해져서 빼짐.
        int zero[303][303]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j] == 0) continue;
                for(int dir=0; dir < 4;dir++){
                    int nx = i + dx[dir];
                    int ny = j + dy[dir];
                    //범위안에 들어오고, board[i][j] == 0 일때 지정된 개수만큼 빼줘야 함
                    if(nx >= 0 && nx < n && ny >=0 && ny <m && board[nx][ny]==0) {
                        zero[i][j]++;
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
            board[i][j] = max(0, board[i][j] - zero[i][j]);    
        }

    }



    return 0;
}

/* 
5 7
0 0 0 0 0 0 0
0 3 6 0 6 7 0
0 3 0 0 0 10 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0


 */