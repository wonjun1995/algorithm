#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int totalSum=0;

    for(int i=0;i<5;i++){
        int n;
        cin >> n;
        totalSum += (n*n);
    }

    cout << totalSum % 10;

    return 0;
}