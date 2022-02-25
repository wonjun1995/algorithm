#include <bits/stdc++.h>
using namespace std;

//오큰수
//Ai의 오큰수는 오른쪽에 있으면서 Ai보다 큰 수 중에서 가장 왼쪽에 있는 수를 의미
//그러한 수가 없는 경우에 오큰수는 -1
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    stack<int> st;
    vector<int> vc;
    int answer[1000001]={0,};
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int input;
        cin >>input;
        vc.push_back(input);
    }
    //역순으로
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top() <= vc[i]){
            st.pop();
        }
        if(st.empty()){
            answer[i] = -1;
            //cout << -1 <<' ';
        }else{
            answer[i] = st.top();
            //cout << st.top()<<' ';
        }
        st.push(vc[i]);
    }
    for(int i =0;i<n;i++){
        cout << answer[i] <<' ';
    }
  
}