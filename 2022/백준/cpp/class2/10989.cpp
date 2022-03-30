#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[10001]={0};
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr[x]+=1;
    }

    for(int i=1;i<10001;i++){
        for(int j=0;j<arr[i];j++){
            cout << i << '\n';
        }
    }

    return 0;
}