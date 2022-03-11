#include<bits/stdc++.h>
using namespace std;

int board[103][103][103];
int vis[103][103][103];
int dx[6]={1,0,-1,0,0,0};
int dy[6]={0,1,0,-1,0,0};
int dz[6]={0,0,0,0,1,-1};

//토마토
//보관 후 하루가 지나면, 익은 토마토들의 인접한 곳에 있는 익지 않은 토마토들은 익은 토마토 영향받아 익게 됨.
//창고에 보관된 토마토들이 며칠이 지나면 다익게 되는지 최소 일수를 구해라.
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,h;
    cin >> n >> m >> h;

    //x,y,z
    queue<tuple<int,int,int>> Q;

    //값 채우기
    for(int z=0;z<h;z++){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin >> board[i][j][z];

                if(board[i][j][z]==1){
                    Q.push({i,j,z});
                }
                if(board[i][j][z]==0){
                    vis[i][j][z]= -1;
                }

            }
        }
    }

    for(int z=0;z<h;z++){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout << board[i][j][z];
            }
            cout << '\n';
        }
        cout << "==============\n";
    }

    cout << "방문횟수\n";
    for(int z=0;z<h;z++){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout << vis[i][j][z];
            }
            cout << '\n';
        }
        cout << "==============\n";
    }

    //bfs
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for(int dir=0;dir < 6;dir++){
            //get()함수를 이용해서 tuple값 가져오기 
            int nx =  get<0>(cur)+ dx[dir];
            int ny = get<1>(cur) + dy[dir];
            int nz = get<2>(cur) + dz[dir];
            //cout << "좌표: "<<nx << ny << nz << '\n';
            if(nx <0 || nx >= m || ny <0 || ny >= n || nz <0 || nz >= h) continue;
            if(vis[nx][ny][nz] >= 0) continue;
            vis[nx][ny][nz] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            //cout << "현재 날짜: " << vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] << '\n';
            Q.push({nx,ny,nz});
        }
    }

    int ans = 0;
    for(int z=0;z<h;z++){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (vis[i][j][z] == -1) {
                    cout << -1 << "\n";
                    return 0;
                }
                ans = max(ans, vis[i][j][z]);
            }
        }
    }
    cout << ans << "\n";

    return 0;
}