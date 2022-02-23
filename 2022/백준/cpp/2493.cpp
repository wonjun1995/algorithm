#include <bits/stdc++.h>
using namespace std;
//탑
//N개의 높이가 서로 다른 탑을 수평 직선의 왼쪽부터 오른쪽 방향으로 차례로 세우고, 각 탑의 꼭대기에 송신기 설치.

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(0);

    int n;
    stack<pair<int,int>> st;
    cin >> n;

    for(int i=1;i<=n;i++){
        int num;
        cin >> num;
        while(!st.empty()){
            if(st.top().second > num) {
                cout << st.top().first << ' ';
                break;
            }
            st.pop();
        }
        if(st.empty()){
            cout << "0" << ' ';
        }
        st.push({i,num});

        
    }

    return 0;
}