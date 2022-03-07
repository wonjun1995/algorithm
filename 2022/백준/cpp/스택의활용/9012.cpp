#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        string input;
        cin >> input;
        stack<char> st;
        bool ans = true;
        for(auto c : input){
            if(c == '('){
                st.push(c);
            }else {
                if(st.empty() || st.top()!='(') {
                    ans = false;
                    break;
                }
                st.pop();
            }
        }
        if(!st.empty()) ans= false;

        if(ans){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }

    return 0;
}