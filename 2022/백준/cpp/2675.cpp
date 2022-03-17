#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n--){
        string s;
        int count;

        cin >> count >> s;

        for(char c: s){
            for(int i=0;i<count;i++){
                cout << c;
            }
        }
        cout << '\n';

    }

    return 0;
}