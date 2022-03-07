#include <bits/stdc++.h>
using namespace std;

//쇠막대기
//여러 개의 쇠막대기를 레이저로 절단하려고 함.
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long ans=0;

    string s;
    cin >> s;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i] == '('){
            st.push(s[i]);
        }else{
            if(s[i-1] == '('){
                st.pop();
                ans += st.size();
            }else{
                st.pop();
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}

/* 
(((()(()()))(())()))(()())
3 3
7 4
11 4
pop이 두번 되서 ()로 판단해서 3개를 더함. error~
14 3
16 2
19 3
21 2
23 2
24 1
24 0
25 1
26 1
26 0
 */