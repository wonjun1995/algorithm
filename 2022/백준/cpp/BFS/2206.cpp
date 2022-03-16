#include <bits/stdc++.h>
using namespace std;

char board[1002][1002];
int vis[1002][1002][2];
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
    Q.push({0,0,0});
    bool exit = false;
    while (!Q.empty())
    {
        auto cur = Q.front();Q.pop();
        if(get<0>(cur) == (n-1) && get<1>(cur) == (m-1)){
            cout << vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] <<'\n'; 
            exit = true;
            break;
        }
        for(int dir=0;dir<4;dir++){
            int nx = get<0>(cur) + dx[dir];
            int ny = get<1>(cur) + dy[dir];
            
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            //0과 1이 핵심 포인트
            int temp = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)]+1;
            if(board[nx][ny] == '0' && vis[nx][ny][get<2>(cur)] == -1){
                vis[nx][ny][get<2>(cur)] = temp;
                Q.push({nx,ny,get<2>(cur)});
                
            }
            //벽을 한번도 안부시고
            if(!get<2>(cur) && board[nx][ny] == '1' && vis[nx][ny][get<2>(cur)] == -1){
                vis[nx][ny][1] = temp;
                Q.push({nx,ny,1});
            }
            
        }

    }
    if(!exit) cout << -1;

/*     for(int z=0;z<2;z++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << vis[i][j][z] << '\t';
            }
            cout << '\n';
        }
        cout << "=================\n";
    } */
    

    return 0;
}

/* 
6 4
0000
1110
1000
0000
0111
0000

6 4
0100
1110
0000
0000
0111
0000

6 4
0100
0110
0000
0000
1111
0000

6 4
0100
0110
0000
0000
0111
0000


6 4
0100
1110
0000
0000
1101
0000

6 4
0100
0110
0000
0010
1101
0000

6 4
0111
0111
0000
0010
1101
0000

6 4 
0000
0000
0000
0000
0000
0000


6 4
0111
0111
0000
0000
1111
0000


6 11
00000000011
01111111111
00001111111
00000000000
11111010101
00000000010

7 11
00000000010
01111111110
01000111110
00010000000
11111111110
11111111111
00000000000
 */