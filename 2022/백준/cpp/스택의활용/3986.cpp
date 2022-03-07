#include <bits/stdc++.h>
using namespace std;

//좋은 단어
//단어 위로 아치형 곡선을 그어 같은 글자끼리(A는 A끼리, B는 B끼리) 쌍을 짓기로 하였다. 
//선끼리 교차하지 않으면서 각 글자를 정확히 한 개의 다른 위치에 있는 같은 글자와 짝 지을수 있다면, 그 단어는 '좋은 단어'

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    stack<char> st;
    string input;
    cin >> n;

    while(n--){
        cin >> input;
        for(auto word : input){
            st.push(word);
        }
    }


    return 0;
}