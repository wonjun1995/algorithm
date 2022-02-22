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
    //7 3
    cin >> n >> k;

    //연결리스트로??
    list<int> templist;
    vector<int> answerlist;
    //int ans=0;
    for(int i=1;i<=n;i++){
        templist.push_back(i);
    }   //1 2 3 4 5 6 7

    auto cursor=templist.begin();   //1
    while(!templist.empty()){
        //k번째 수를 제거하기 위함.
        for(int i=1;i<k;i++){
            //커서가 리스트의 끝일경우 시작지점으로 다시 복귀
            if(cursor == templist.end()){
                cursor=templist.begin();
            }
            //커서 증가
            cursor++;
            //커서가 또 다시 리스트의 끝일 경우 시작지점으로 다시 복귀
            if(cursor == templist.end()){
                cursor=templist.begin();
            }
        }
        answerlist.push_back(*cursor);
        cursor = templist.erase(cursor);
        
    }
    cout << '<';
    for(int i=0;i<answerlist.size()-1;i++){
        cout <<answerlist[i]<<", ";
    }
    cout << answerlist[answerlist.size()-1];
    cout << '>';
    return 0;
}