#include <bits/stdc++.h>
using namespace std;

string board[101];
bool vis[101][101];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};


//적록색약
//N x N 그리드에 RGB 중 하나를 칠한 그림이 있음
// 그림은 몇개의 구역으로 나뉘어짐. 구역은 같은 색으로 이루어짐.
//같은 색상이 상하좌우로 인접해있는 경우에 두 글자는 같은 구역에 속함.
int main(){

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> board[i];
    }
    for(int i=0;i<n;i++){
            fill(vis[i],vis[i]+n,false);
    }
    int ans1=0;
    int ans2=0;
    //적록색약이 아닌 경우 bfs
    queue<pair<int,int>> Q;


    //적록색약인경우 G를 R로 바꿔야하는 bfs


    return 0;
}
/* 
5
RRRBB
GGBBB
BBBRR
BBRRR
RRRRR
 */