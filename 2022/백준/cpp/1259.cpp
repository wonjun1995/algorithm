#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(true){
        bool ans=true;
        string s;
        cin >> s;
        if(s == "0") break;
        for(int i=0;i<s.size()/2;i++){
            if(s[i] != s[s.size()-i-1]){
                ans = false;
                cout << "no\n";
                break;
            }
        }
        if(ans) cout << "yes\n";

    }
    return 0;
}