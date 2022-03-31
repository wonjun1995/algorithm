#include <bits/stdc++.h>
using namespace std;

//나무 자르기
//이진탐색
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    long long sum;
    int ans =0;
    int maxi=0;
    vector<int> vc;

    cin >> n >> m;
    for(int i=0;i<n;i++){
        int input;
        cin >> input;
        vc.push_back(input);
        if(input> maxi){
            maxi=input;
        }
    }

    int left = 0;
    int right = maxi;
    while(left <= right){
        int mid = (left + right)/2;
        sum = 0;
        for(int i=0;i<n;i++){
            if(mid < vc[i]){
                sum +=(vc[i]-mid);
            }
        }
        if(sum >=m){
            if(ans < mid){
                ans = mid;
            }
            left = mid+1;
        }else{
            right = mid -1;
        }
    }
    cout << ans;

    return 0;
}