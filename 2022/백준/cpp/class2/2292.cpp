#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int cnt=0;
    //1 > 6 > 12 > 18 > 24
    int temp =1;
    while(true){
        if(n==1) {
            cout << 1;
            break;
        }
        if(temp>=n){
            cout << cnt;
            break;
        }
        temp += cnt*6;
        cnt++;
    }
    return 0;
}