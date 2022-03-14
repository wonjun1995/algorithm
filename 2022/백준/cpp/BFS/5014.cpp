#include <bits/stdc++.h>
using namespace std;

int board[1000002];
//스타트링크
//스타트링크는 총 F층으로 이루어진 고층 중 G층에 있음.
//강호가 지금 있는 곳은 S층 
//버튼이 2개만 있음. U D 
//G층에 도착하려면, 버튼을 적어도 몇번 눌러야 하는지 구하시오.
//만약 갈 수 없다면, "use the stairs"를 출력
int main(){

    int f,s,g,u,d;
    cin >> f >> s >> g >> u >> d;
    fill(board+1,board+f+1,-1);
    queue<int> Q;

    Q.push(s);
    board[s]=0;
    while (!Q.empty())
    {
        auto cur = Q.front();Q.pop();
        for(auto dir : {cur+u,cur-d}){
            if(dir <= 0 || dir > f ) continue;
            if(board[dir] != -1) continue;
            board[dir] = board[cur]+1;
            Q.push(dir);
        }
    }
    
    if(board[g] == -1) cout << "use the stairs";
    else cout << board[g];

    return 0;
}

/* 
백준 1697번과 매우 유사함.
 */