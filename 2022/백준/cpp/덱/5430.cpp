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
        bool reverse = false;
<<<<<<< HEAD
=======
        bool error = false;
>>>>>>> 8a09edab64ebd3eb0e6b8a27c7d5f7d02c7de49c
        cin >> p >> n >> x;
        //문자열 2개의 숫자인 경우 어떻게 처리를 할 것인가??
        for(auto c : x ){
            if(c == '[' || c == ']' || c == ','){
                if(c!='[' && !inputNum.empty()){
                    //cout << "inputNum : " << inputNum << " ";
                    dq.push_back(stoi(inputNum));
                    inputNum="";
                }
                continue;
            }
            inputNum += c;
        }
        for(auto func : p){

<<<<<<< HEAD

        for(auto func : p){
=======
>>>>>>> 8a09edab64ebd3eb0e6b8a27c7d5f7d02c7de49c
            if(func == 'R'){
                //배열에 있는 수의 순서를 뒤집음.
                if(reverse){
                    reverse = false;
                }else{
                    reverse = true;
                }
            }
<<<<<<< HEAD
            
=======
>>>>>>> 8a09edab64ebd3eb0e6b8a27c7d5f7d02c7de49c
            if(reverse && func == 'D'){
                if(!dq.empty()){
                    dq.pop_back();
                }else{
<<<<<<< HEAD
=======
                    error=true;
>>>>>>> 8a09edab64ebd3eb0e6b8a27c7d5f7d02c7de49c
                    break;
                }
            }else if(!reverse && func == 'D'){
                if(!dq.empty()){
                    dq.pop_front();
                }else{
<<<<<<< HEAD
                    break;
                }
            }else if(dq.empty()){
                cout << "error\n";
            }
        }
        //error , [] 일 경우 어떻게 처리 할 것인가??
        //dq가 비어있을때는 []
        //dq가 비어있는데 D를 할 경우 error!

        //순서가 뒤바뀌고 pop된 상태의 dq를 출력
        if(reverse && !dq.empty()){
            cout << '[';
=======
                    error=true;
                    break;
                }
                
            }
        }
        if(error){
            cout << "error\n";
            continue;
        }
        //순서가 뒤바뀌고 pop된 상태의 dq를 출력
        cout << '[';
        if(reverse && !dq.empty()){
>>>>>>> 8a09edab64ebd3eb0e6b8a27c7d5f7d02c7de49c
            for(auto ans = dq.rbegin(); ans != dq.rend(); ans++){
                if(ans == dq.rend()-1){
                    cout << *ans;    
                }else{
                    cout << *ans <<',';
                }
            }
<<<<<<< HEAD
            cout << "]\n";
        }
        //순서가 안바뀌고 pop된 상태의 dq를 출력
        else if(!reverse && !dq.empty()){
            cout << '[';
            for(auto ans = dq.begin(); ans != dq.end(); ans++){
                if(ans == dq.end()-1){
                    cout << *ans;    
                }else{
                    cout << *ans <<',';
                }
            }
            cout << "]\n";
=======
>>>>>>> 8a09edab64ebd3eb0e6b8a27c7d5f7d02c7de49c
        }
        //순서가 안바뀌고 pop된 상태의 dq를 출력
        else if(!reverse && !dq.empty()){
            for(auto ans = dq.begin(); ans != dq.end(); ans++){
                if(ans == dq.end()-1){
                    cout << *ans;    
                }else{
                    cout << *ans <<',';
                }
            }
        }
        cout << "]\n";

    }


    return 0;
}

/*
1
DD
2
[3,2]
[]

1
<<<<<<< HEAD
RDDD
2
[3,2]
error

1
RDD
4
[1,2,3,4]
[2,1]
=======
RDD
4
[1,2,3,4]
>>>>>>> 8a09edab64ebd3eb0e6b8a27c7d5f7d02c7de49c

1
D
0
[]

1
RRD
6
[1,1,2,3,5,8]

*/