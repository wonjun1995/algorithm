#include <bits/stdc++.h>
using namespace std;

string board[1001];
int f_dist[1002][1002];
int j_dist[1002][1002];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //테스트 케이스의 수
    int n;
    cin >> n;

    while(n--){
        int x,y;
        bool exit = false;
        cin >> x >> y;

        for(int i=0;i<y;i++){
            cin >> board[i];
        }

        for(int i=0;i < y;i++){
            fill(f_dist[i],f_dist[i]+x,0);
            fill(j_dist[i],j_dist[i]+x,0);
        }
        queue<pair<int,int>> fq;
        queue<pair<int,int>> jq;

        for(int i=0;i<y;i++){
            for(int j=0;j<x;j++){
                if(board[i][j] == '@'){
                    jq.push({i,j});
                    j_dist[i][j]=1;
                }else if(board[i][j] == '*'){
                    fq.push({i,j});
                    f_dist[i][j]=1;
                }
            }
        }

        //불 BFS
        while(!fq.empty()){
            auto cur = fq.front(); fq.pop();
            for(int dir =0;dir <4;dir++){
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];
                if(nx < 0 || nx >= y || ny < 0 || ny >=x) continue;
                if(board[nx][ny] == '#') continue;
                if(f_dist[nx][ny]) continue;
                f_dist[nx][ny] = f_dist[cur.first][cur.second] +1;
                fq.push({nx,ny});
            }
        }

        //상근이 불
        while(!jq.empty() && !exit){
            auto cur = jq.front(); jq.pop();
            for(int dir =0;dir <4;dir++){
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];
                if(nx < 0 || nx >= y || ny < 0 || ny >=x){
                    cout << j_dist[cur.first][cur.second] << '\n';
                    exit = true;
                    break;
                }
                if(board[nx][ny] == '#') continue;
                if(j_dist[nx][ny]) continue;
                if(f_dist[nx][ny] != 0 && f_dist[nx][ny] <= j_dist[cur.first][cur.second]+1) continue;
                j_dist[nx][ny] = j_dist[cur.first][cur.second] +1;
                jq.push({nx,ny});
            }
        }
        if(!exit) cout << "IMPOSSIBLE" << '\n';

    }

    return 0;
}

/* 
1
4 4
####
#@*#
#..#
#..#

1
3 3
###
#@#
###
 */