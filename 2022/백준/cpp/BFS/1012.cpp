#include <bits/stdc++.h>
using namespace std;


int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

//유기농 배추
// 0은 배추가 심어져있지 않은 땅, 1은 배추가 심어져있는 땅
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //test 케이스의 수 T
    int t;
    cin >> t;
    //테스트케이스만큼 돌리기
    while(t--){
        //초기화해줘야할것? 큐 , 땅, 방문 여부?
        queue<pair<int,int>> Q;
        int board[51][51];
        bool vis[51][51];


        //땅 사이즈, 배추 심기
        int m,n,k;
        cin >> m >> n >> k;
        
        for(int i=0;i<n;i++){
            fill(board[i],board[i]+m,0);
        }
        for(int i=0;i<n;i++){
            fill(vis[i],vis[i]+m,false);
        }

        for(int i=0;i<k;i++){
            //배추의 위치
            int x,y;
            cin >> x >> y;
            board[y][x] = 1;
        }

        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //배추가 있고 방문하지 않았을 때 bfs 시작 및 count ++
                if(board[i][j] == 1 && !vis[i][j]){
                    //bfs
                    vis[i][j]=true;
                    Q.push({i,j});
                    while(!Q.empty()){
                        pair<int,int> cur = Q.front();
                        Q.pop();
                        for(int dir=0;dir<4;dir++){
                            int nx=cur.first + dx[dir];
                            int ny=cur.second + dy[dir];
                            if(nx < 0 || nx >= n || ny < 0 || ny >= m ) continue;
                            if(vis[nx][ny] || board[nx][ny] != 1)continue;
                            vis[nx][ny] = true;
                            Q.push({nx,ny});
                        }
                    }
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}