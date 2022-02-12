#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //문자열에 포함되는 괄호는 소괄호() 대괄호[]
    //짝을 이루는 두 괄호가 있을 때, 그 사이에 있는 문자열도 균형이 잡혀야 한다.
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    while(true){
        getline(cin,s);
        if ( s == "."){
            break;
        }
        stack<char> stack;
        bool balance = true;

        for(auto c : s){
            //왼쪽 괄호
            //stack이 비어있으면 에러
            //오른쪽 괄호
            //닫아줘야할 때 짝이 맞아야 함
            //cout << "출력 "<< s << '\n';
            if(c== '(' || c == '['){
                stack.push(c);
            }else if(c == ')'){
                if(stack.empty() || stack.top() != '('){
                    balance = false;
                    break;
                }
                stack.pop();
            }else if(c == ']'){
                if(stack.empty() || stack.top() != '['){
                    balance = false;
                    break;
                }
                stack.pop();
            }    
        }
        //각 줄마다 해당 문자열이 균형을 이루고 있으면 문자열 출력
        if(!stack.empty()) balance = false;
        if(balance){
            cout << "yes" << '\n';
        }else{
            cout << "no" << '\n';
        }

    }
    
    return 0;
}