#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[26];
    fill(arr,arr+26,-1);

    string s;
    cin >> s;

    for(int i=0;i<s.size();i++){
        if(arr[s[i]-97] == -1){
            arr[s[i]-97] = i;
        }
    }

    for(auto c : arr){
        cout << c << ' ';
    }


    return 0;
}