#include <bits/stdc++.h>
using namespace std;

int answer[26]={0,};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    for(char c : s){
        if(c < 97) answer[c-65]++;
        else answer[c-97]++;
    }
    int max=0;
    int max_idx = 0;
    int count =0;
    for(int i=0;i<26;i++){
        if(max < answer[i]){
            max = answer[i];
            max_idx = i;
        }
    }
    for(int i=0;i<26;i++) { if(max==answer[i]) count++; }
    if(count>1) cout << "?"; 
    else cout << (char)(max_idx+65);

    return 0;
}