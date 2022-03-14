#include<bits/stdc++.h>
using namespace std;

char board[33][33][33];
int vis[33][33][33];
int dx[6] = {1,0,-1,0,0,0};
int dy[6] = {0,1,0,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};

//상범빌딩
//당신은 상범빌딩
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while(true){

        //빌딩의 층 수 ,행, 열
        int L,R,C;
        bool exit = false;
        queue<tuple<int,int,int>> Q;
        cin >> L >> R >> C;
        
        if(L == 0 && R == 0 && C == 0) break;

        //# : 막혀있어 지나갈 수 없는 칸
        //. : 비어있는 칸
        //S : 당신의 시작 지점
        //E : 탈출할 수 있는 출구
        
        //vis 초기화
        for(int i=0;i<L;i++){
            for(int j=0;j<R;j++){
                fill(vis[i][j],vis[i][j]+C,0);
            }
        }

        for(int i=0;i<L;i++){
            for(int j=0;j<R;j++){
                for(int k=0;k<C;k++){
                    cin >> board[i][j][k];
                    if(board[i][j][k] == 'S'){
                        Q.push({i,j,k});
                    }
                    else if(board[i][j][k] == '.'){
                        vis[i][j][k] = -1;
                    }
                }
            }
        }
        //-1이면 갈 수 있는 길이기 때문에 가고 0 이상이면 못감 

        while(!Q.empty()){
            if(exit) break;
            auto cur = Q.front(); Q.pop();
            for(int dir=0;dir<6;dir++){
                int nz = get<0>(cur) + dz[dir];
                int nx = get<1>(cur) + dx[dir];
                int ny = get<2>(cur) + dy[dir];
                if(nx < 0 || nx >=R || ny <0 || ny >= C || nz < 0 || nz >= L) continue;
                if(board[nz][nx][ny] == '#' || vis[nz][nx][ny] > 0 ) continue;
                vis[nz][nx][ny] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] +1;
                if(board[nz][nx][ny] == 'E'){
                    cout << "Escaped in " << vis[nz][nx][ny] << " minute(s).\n";
                    exit = true;
                    break;
                }
                Q.push({nz,nx,ny});
            }
        }
        
        if(!exit) cout << "Trapped!\n";
    }


    return 0;
}