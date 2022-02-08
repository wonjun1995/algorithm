#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    stack<int> s;

    for(int i=0;i<n; i++){
        string input;
        cin >> input;
        if(input == "push"){
            int x;
            cin >> x;
            s.push(x);
        }else if(input == "pop"){
            if(s.empty()){
                cout << -1 << endl;
            }else{
                cout << s.top() <<endl;
                s.pop();
            }
        }else if(input == "size"){
            cout << s.size() <<endl;
        }else if(input == "empty"){
            if(s.empty()){
                cout << 1 <<endl;
            }else{
                cout << 0 <<endl;
            }
        }else if(input == "top"){
            if(s.empty()){
                cout << -1 << endl;
            }else{
                cout << s.top() <<endl;
            }
        }
    }

    return 0;
}