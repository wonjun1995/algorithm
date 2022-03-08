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
            num*=2;
            st.push(s[i]);

        }else if(s[i]=='['){
            num*=3;
            st.push(s[i]);
        }else if(s[i] == ')'){
             if(s[i-1] == '(') ans += num;
             st.pop();
             
        }else{
            //']'
        }
    }

    return 0;
}