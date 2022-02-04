#include <iostream>
#include <string>
using namespace std;

int main(){

    cin.tie(0);
    string s;
    cin >> s;
    for( char a = 'a'; a <= 'z'; a++){
        int cnt = 0;
        for (char i : s){
            if(i == a){
                cnt++;
            }
        }
        cout << cnt << ' ';
    }
    return 0;
}