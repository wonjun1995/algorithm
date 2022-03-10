#include <bits/stdc++.h>
using namespace std;

//괄호의 값
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    stack<char> st;
    int ans=0;
    int num =1;


    for(int i=0;i<s.size();i++){

        if(s[i] == '('){
            num *= 2;
            st.push(s[i]);

        }else if(s[i]=='['){
            num *= 3;
            st.push(s[i]);
        }else if(s[i] == ')'){
            //예외의 경우? empty이거나 [ 일 경우?
            if(st.empty() || st.top()!='('){
                cout << 0;
                //바로 종료
                return 0;
            }
            //num의 값을 더하고 num는 다시 초기화
             if(s[i-1] == '(') ans += num;
             st.pop();
             num /=2;
        }else{
            //']'
            if(st.empty() || st.top()!='['){
                cout << 0;
                return 0;
            }
            if(s[i-1] == '[') ans += num;
            st.pop();
            num /=3;
        }
    }

    if(st.empty()) cout << ans;
    else cout << 0;

    return 0;
}