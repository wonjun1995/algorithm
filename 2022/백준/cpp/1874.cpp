#include <bits/stdc++.h>
using namespace std;

//스택 수열
//1부터 n까지의 수를 스택에 넣었다가 뽑아 늘어놓음으로써, 하나의 수열을 만들 수 있음.
//스택에 push하는 순서는 반드시 오름차순을 지키도록 함.
//push연산은 +로, pop 연산은 -로 표현하도록 한다. 불가능한 경우 NO를 출력한다.
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    stack<int> st;
    vector<char> vc;
    cin >> n;
    int count=1;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        //4입력
        //1부터 계속 push함. 4가될때까지.
        while(count <=num){
            st.push(count);
            count++;
            vc.push_back('+');
        }
        if(st.top()==num){
            st.pop();
            vc.push_back('-');
        }else{
            cout << "NO";
            return 0;
        }
    }

    for(auto i : vc){
        cout << i<<'\n';
    }

    return 0;
}

// ++++--++-++-----