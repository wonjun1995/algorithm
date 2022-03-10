#include <bits/stdc++.h>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int dist[100002];
//숨바꼭질
//수빈이는 동생과 숨바꼭질을 하고 있다.
//수빈이는 현재 점 N, 동생은 점 K 
//수빈이는 걷거나 순간이동 가능
//수빈이의 위치가 x일 때 걷는다면 1초 후 x-1 or x+1로 이동
//순간이동을 하는 경우 1초 후 2*x의 위치로 이동.
int main(){
    int n,k;
    cin >> n >> k;

    fill(dist,dist+100002,-1);

    queue<int> Q;
    Q.push(n);

    dist[n]=0;
    while (dist[k] == -1)
    {
        auto cur = Q.front(); Q.pop();
        for(int next : {cur-1,cur+1,cur*2}){
            if(next < 0 || next > 100000) continue;
            if(dist[next] != -1) continue;
            dist[next]=dist[cur]+1;
            Q.push(next);
        }
        
    }
    
    cout << dist[k];

}