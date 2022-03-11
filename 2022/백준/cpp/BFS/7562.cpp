#include <bits/stdc++.h>
using namespace std;

int vis[303][303];
int dx[8]={1,2,2,1,-1,-2,-2,-1};
int dy[8]={2,1,-1,-2,-2,-1,1,2};

//나이트의 이동
//나이트는 몇 번 움직이면 이 칸으로 이동 가능할까
//나이트의 이동반경을 알고난 후 BFS 돌리고 이동하려는 칸의 횟수를 출력!
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //테스트 케이스의 수
    int n;
    cin >> n;

    while(n--){
        //체스판 한변의 길이
        int l;
        cin >> l;
        for(int i=0;i<l;i++) fill(vis[i],vis[i]+l,-1);
        queue<pair<int,int>> Q;

        int x,y,x1,y1;
        cin >> x >> y;
        vis[x][y]=0;
        Q.push({x,y});

        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            for(int dir=0;dir<8;dir++){
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];
                if(nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
                if(vis[nx][ny] >=0) continue;
                vis[nx][ny] = vis[cur.first][cur.second] +1;
                Q.push({nx,ny});
            }
        }
        
        cin >> x1 >> y1;
        cout << vis[x1][y1] << '\n';
    }
    return 0;
}