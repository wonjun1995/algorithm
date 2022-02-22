#include <bits/stdc++.h>
using namespace std;

//요세푸스 문제
//1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K가 주어짐.
//이제 순서대로 K번째 사람을 제거함.
//한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해서 나간다.
//N명의 사람이 모두 제거될때까지 계속됨.
//예를 들어 (7, 3)-요세푸스 순열은 <3, 6, 2, 7, 5, 1, 4>
int main(){
    int n,k;
    cin >> n >> k;

    //연결리스트로??
    list<int> list;
    int ans=0;
    for(int i=1;i<=n;i++){
        list.push_back(i);
    }
    for(auto i :list){
        cout << i << ' ';
    }
    auto curser=list.begin();
    while(!list.empty()){
       
    }
    


    return 0;
}