#include <bits/stdc++.h>
using namespace std;

string board[102];
int vis[102][102];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    //N,M 크기의 배열로 표현되는 미로
    int n,m;
    cin >> n >> m;
    //미로에서 1은 이동할 수 있는 칸 , 0은 이동할 수 없는 칸
    //(1,1) -> (n,m)위치로 이동할 때 지나야 하는 최소의 칸 수를 구해라.
    for(int i = 0; i < n; i++){
        cin >> board[i];
    }
    for(int i = 0; i < n; i++){
        fill(vis[i],vis[i]+m,-1);
    }
    queue<pair<int,int>> Q;
    Q.push({0,0});
    vis[0][0]=1;//1,1에서 출발
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        //cout << cur.first <<' '<<cur.second <<'\n';
        //동서남북으로 1일때 count ++ 해서 최댓값 계속해서 찾기
        for(int dir=0; dir<4; dir++){
            int nx = cur.first+dx[dir];
            int ny = cur.second+dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(vis[nx][ny] >= 0 || board[nx][ny] != '1') continue;
            vis[nx][ny]= vis[cur.first][cur.second]+1;
            Q.push({nx,ny});
        }
    }
    cout << vis[n-1][m-1];
}