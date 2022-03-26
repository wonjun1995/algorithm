#include <bits/stdc++.h>
using namespace std;

int dist[200002];
int vis[200002];
//숨바꼭질3
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    fill(dist,dist+100001,-1);
    cin >> n >> k;
    deque<int> Q;

    vis[n]=1;
    dist[n] = 0;
    Q.push_back(n);
    while (!Q.empty())
    {
        auto cur = Q.front();Q.pop_front();
        if(2*cur < 200002 && dist[cur*2] == -1){
            dist[cur*2] = dist[cur];
            Q.push_front(cur*2);
        }

        for(int dir :{cur-1,cur+1}){
            if(dir<0 || dir >= 200002) continue;
            if(vis[dir] || dist[dir] != -1) continue;
            dist[dir] = dist[cur]+1;
            vis[dir] =1;
            Q.push_back(dir);
        }
    }
    /* for(int i=0; i<k+5;i++){
        cout << i <<' '<< dist[i] << '\n';
    } */  
    cout << dist[k];
    
    return 0;
}