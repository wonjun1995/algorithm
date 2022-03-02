#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    deque<int> dq;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string input;
        cin >> input;
        if(input == "push_front"){
            int n;
            cin >> n;
            dq.push_front(n);
        }else if(input == "push_back"){
            int n;
            cin >> n;
            dq.push_back(n);
        }else if(input == "pop_front"){
            if(dq.empty()){
                cout << -1 <<'\n';
            }else{
                cout << dq.front()<<'\n';
                dq.pop_front();
            }
        }else if(input == "pop_back"){
            if(dq.empty()){
                cout << -1 <<'\n';
            }else{
                cout << dq.back()<<'\n';
                dq.pop_back();
            }
        }else if(input == "size"){
            cout << dq.size() << '\n';
        }else if(input == "empty"){
            if(dq.empty()){
                cout << 1 <<'\n';
            }
            else {
                cout << 0 << '\n';
            }
        }else if(input == "front"){
            if(dq.empty()){
                cout << -1 <<'\n';
            }else{
                cout << dq.front()<<'\n';
            }
        }else if(input == "back"){
            if(dq.empty()){
                cout << -1 <<'\n';
            }else{
                cout << dq.back()<<'\n';
            }
        }
    }
    return 0;
}