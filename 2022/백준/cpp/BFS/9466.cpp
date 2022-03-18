#include <bits/stdc++.h>
using namespace std;

int arr[1000001];
bool vis[1000001];
//텀 프로젝트
//문제 해결 강의를 신청한 학생들은 텀 프로젝트 수행
//프로젝트 팀원 수에는 제한이 없음
//
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int testCase;
    cin >> testCase;
    while(testCase--){
        int n;
        queue<int> Q;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        Q.push(arr[0]);
        vis[0] = 1;
        while(!Q.empty()){
            auto cur = Q.front();Q.pop();
            int nx = arr[cur];
        }

    }
    return 0;
}