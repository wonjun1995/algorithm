#include <bits/stdc++.h>
using namespace std;

//제로
//잘못된 수를 부를 때마다 0을 외쳐서, 가장 최근에 재민이가 쓴 수를 지우게 시킨다.(pop)
//이렇게 모든 수를 받아 적은 후 그 수의 합을 구하시오.
int main(){

    int k;
    cin >> k;
    stack<int> stack;
    while(k--){
        int n;
        cin >> n;
        if(n == 0){
            stack.pop();
        }else{
            stack.push(n);
        }
    }
    int answer=0;
    while(!stack.empty()){
        answer+= stack.top();
        stack.pop();
    }
    cout << answer;
    return 0;
}