#include <bits/stdc++.h>
using namespace std;

//AC
//AC는 정수 배열에 연산을 하기 위해 만든 언어
// 두가지 함수 R(뒤집기)과 D(버리기) 가 있음.
// R은 배열에 있는 수의 순서를 뒤집는 함수
// D는 첫번째 수를 버리는 함수  배열이 비어있는데 D를 사용한 경우에는 에러가 발생한다.
// 함수는 조합해서 한 번에 사용  
// "AB"는 A를 수행한 다음에 바로 이어서 B를 수행하는 함수
// "RDD"는 배열을 뒤집은 다음 처음 두 수를 버리는 함수

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    //테스트 케이스의 개수
    int t;
    cin >> t;

    while(t--){
        //수행할 함수 p
        string p;
        //배열에 들어있는 수의 개수 n
        int n;
        //배열에 들어있는 정수
        string x;
        string inputNum="";
        deque<int> dq;
        cin >> p >> n >> x;
        //문자열 2개의 숫자인 경우 어떻게 처리를 할 것인가??
        string t = "78";
        for(auto c : x ){
            if(c == '[' || c == ']' || c == ','){
                if(c != '['){
                    dq.push_back(inputNum);
                }
                inputNum="";
                continue;
            }
            inputNum += c;
            cout << "inputNum:" << inputNum<< '\n';
        }

        cout << "test\n";
        for(int i=0;i<n; i++){
            cout << dq[i] << ' ';
        }

    }


    return 0;
}