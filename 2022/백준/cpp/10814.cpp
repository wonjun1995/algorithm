#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,string> a , pair<int,string> b){
    return a.first < b.first;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    pair<int,string> arr;
    vector<pair<int,string>> vc;
    for(int i=0;i<n;i++){
        cin >> arr.first >> arr.second;
        vc.push_back(arr);
    }

    //원래의 순서를 손상시키지 않고 특정 조건에서만 정렬시키는 방법 : stable sort
    stable_sort(vc.begin(),vc.end(),compare);

    for(auto c : vc){
        cout << c.first << ' ' << c.second << '\n';
    }

    return 0;
}