#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    deque<int> q;
    for(int i=0; i<n; i++){
        string input;
        cin >> input;

        if(input == "push"){
            int x;
            cin >> x;
            q.push_back(x);
        }else if(input == "pop"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() <<'\n';
                q.pop_front();
            }
        }else if(input == "size"){
            cout << q.size() << '\n';
            
        }else if(input == "empty"){
            if(q.empty()){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }else if(input == "front"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() << '\n';
            }
            
        }else if(input == "back"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.back() << '\n';
            }
        }
    }
    return 0;
}