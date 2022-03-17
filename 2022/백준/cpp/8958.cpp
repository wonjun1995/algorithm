#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int ans=0;
        int sum = 0;
        for(char c : s){
            if(c == 'O'){
                ans++;
                sum +=ans;
            }else if(c == 'X'){
                ans=0;
            }
        }

        cout << sum << '\n';
    }
    return 0;
}
