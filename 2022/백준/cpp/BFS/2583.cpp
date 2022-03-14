#include <bits/stdc++.h>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int board[103][103];
int vis[103][103];

//영역 구하기
//눈금의 간격이 1인 m(세로) X n(가로) 모눈종이
//이 모눈종이 위에 눈금에 맞추어 k개의 직사각형을 그릴 때, 이들 k개의 직사각형 내부를 제외한 나머지 부분이 몇 개의 분리된 영역으로 나누어짐. 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count=0;
    int m,n,k;
    cin >> m >> n >>k;

    //직사각형 넓이에 대한 부분을 1로 설정 
    for(int i=0;i<k;i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j=y1;j<y2;j++){
            for(int k=x1;k<x2;k++){
                board[j][k]=1;
            }
        }
    }
/*     for(int i=0;i<m;i++){
        for(int j=0; j < n; j++){
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    } */

    vector<int> ans;
    //직사각형에 대한 영역 설정 완료 후 bfs 시작해야함.
    //board가 0인 부분에서 start
    for(int i=0; i < m; i++){
        for(int j=0;j < n; j++){
            if(board[i][j] == 1 ||vis[i][j]==1) continue;

            queue<pair<int,int>> Q;
            vis[i][j] = 1;
            int width=1;
            count++;
            Q.push({i,j});
            //cout << "간이 디버깅" << '\n';
            while(!Q.empty()){
                auto cur = Q.front(); Q.pop();
                for(int dir=0; dir < 4; dir++){
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                    if(board[nx][ny] == 1 || vis[nx][ny] == 1) continue;
                    Q.push({nx,ny}); 
                    vis[nx][ny] = 1;
                    width++;
                }
            }
            ans.push_back(width);
        }
    }

    sort(ans.begin(),ans.end());
    cout << count << '\n';
    for(auto c : ans){
        cout << c << ' ';
    }

    return 0;
}