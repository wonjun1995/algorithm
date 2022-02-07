#include <bits/stdc++.h>
using namespace std;

int main(){

    cin.tie(0);
    string s;
    cin >> s;
    
    list<char> list;
    for(auto c : s){
        list.push_back(c);
    }
    auto curser=list.end();

    int n;
    cin >> n;

    for(int i=0;i < n; i++){
        char input;
        cin >> input;
        if(input == 'P'){
            char input2;
            cin >> input2;
            list.insert(curser,input2);
        }else if(input == 'L'){
            if(list.begin() != curser){
                curser--;
            }
        }else if(input == 'D'){
            if(list.end() != curser){
                curser++;
            }
        }else if(input == 'B'){
            if(list.begin() != curser){
                curser--;
                curser=list.erase(curser);
            }
        }
    }
    for (auto c : list){
        cout << c;
    }

    return 0;
}