#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt =0;
    int n;
    int ans =666;
    cin >>n;
    while(true){
        int temp = ans;
        while(temp!= 0){
            if(temp % 1000 == 666){
                cnt++;
                break;
            }else{
                temp/=10;
            }
        }

        if(cnt == n){
            cout << ans;
            break;
        }
        ans++;

    }

    return 0;
}