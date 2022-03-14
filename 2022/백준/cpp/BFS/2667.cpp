#include <bits/stdc++.h>
using namespace std;

string board[27];
int vis[27][27];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

//단지 번호붙이기
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int count =0;

    for(int i=0;i<n;i++){
        cin >> board[i];
    }
    /* cout << "==================\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << board[i][j];
        }
        cout << '\n';
    } */

    vector<int> ans;

    for(int i=0;i < n; i++){
        for(int j=0;j < n; j++){
            if(board[i][j] == '0' || vis[i][j] == 1) continue;
            queue<pair<int,int>> Q;
            Q.push({i,j});
            vis[i][j]=1;
            int home=1;
            count++;
            while(!Q.empty()){
                auto cur = Q.front(); Q.pop();
                for(int dir=0;dir < 4;dir++){
                    int nx = cur.first + dx[dir];
                    int ny = cur.second+ dy[dir];
                    if(nx <0 || nx >= n || ny < 0 || ny >= n) continue;
                    if(board[nx][ny] == '0' || vis[nx][ny] == 1) continue;
                    Q.push({nx,ny});
                    vis[nx][ny] = 1;
                    home++;
                }
            }
            ans.push_back(home);
        }
    }
    sort(ans.begin(),ans.end());
    cout << count << '\n';
    for(auto c : ans){
        cout << c << '\n';
    }



    return 0;
}