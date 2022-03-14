#include <bits/stdc++.h>
using namespace std;

int board[103][103];
int vis[103][103];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

//안전영역
//많은 비가 내리는 장마철에 대비해서 다음과 같은 일을 계획중
//어떤 지역의 높이 정보를 파악
//
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int maxNum =0;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> board[i][j];
            maxNum = max(maxNum,board[i][j]);
        }
    }

    /* cout << minNum << ' ' << maxNum << '\n';

    cout << "========================\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    } */

    int maxCount=0;
    for(int height=0; height <= maxNum;height++){
        //vis 초기화 필수
        for(int i=0;i<n;i++){
            fill(vis[i],vis[i]+n,0);
        }
        //영역 카운트
        int ans =0;
        for(int i=0;i<n; i++){
            for(int j=0;j<n;j++){
                if(board[i][j] > height && vis[i][j] == 0){
                    queue<pair<int,int>> Q;
                    Q.push({i,j});
                    vis[i][j] = 1;
                    while (!Q.empty())
                    {
                        auto cur = Q.front();Q.pop();
                        for(int dir =0;dir <4;dir++){
                            int nx = cur.first + dx[dir];
                            int ny = cur.second + dy[dir];
                            //4방향을 돌아야 하는데 height보다 커야함
                            if(nx < 0 || nx >=n || ny < 0 || ny >= n) continue;
                            if(vis[nx][ny]!=0 || board[nx][ny] <= height) continue;
                            Q.push({nx,ny});
                            vis[nx][ny] = 1;
                        }
                    }
                    ans++;
                }
            }
        }
        maxCount = max(maxCount,ans);
    }
    cout << maxCount;
    return 0;
}