#include <bits/stdc++.h>
using namespace std;

int dist[100001];
int vis[100001];
//숨바꼭질3
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    fill(dist,dist+100001,-1);
    cin >> n >> k;
    queue<int> Q;

    vis[n]=1;
    dist[n] = 1;
    Q.push(n);
    while (!Q.empty())
    {
        auto cur = Q.front();Q.pop();
        if((cur*2)>=0 && (cur*2)<100001){
            if(vis[cur*2] || dist[cur*2] != -1) continue;
            dist[cur*2] = dist[cur];
            vis[cur*2] = 1;
            Q.push(cur*2);
        }
        /* if(cur == k){
            cout << dist[cur]-1;
            break;
        } */

        for(int dir :{cur-1,cur+1}){
            if(dir<0 || dir >= 100001) continue;
            if(vis[dir] || dist[dir] != -1) continue;
            dist[dir] = dist[cur]+1;
            vis[dir] =1;
            Q.push(dir);
        }
    }
    /* for(int i=0; i<k+5;i++){
        cout << i <<' '<< dist[i] << '\n';
    } */  
    cout << dist[k]-1;
    
    return 0;
}