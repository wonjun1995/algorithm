#include <bits/stdc++.h>
using namespace std;

//카드2
//N장의 카드가 있음.
//1번 카드가 제일 위에, N번 카드가 제일 아래인 상태로 순서대로
//다음과 같은 동작을 카드가 한 장 남을 때까지 반복하게 된다
//우선, 제일 위에 있는 카드를 바닥에 버림. 
//그 다음 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮김.
int main(){
    int input;
    deque<int> Q;
    cin >> input;
    for(int i=1;i<=input;i++){
        Q.push_back(i);
    }
    while(!Q.empty()){
        if(Q.size()==1) break;
        Q.pop_front();
        Q.push_back(Q.front());
        Q.pop_front();
    }
    cout << Q.front();

    return 0;
}