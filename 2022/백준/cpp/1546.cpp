#include <bits/stdc++.h>
using namespace std;

double arr[1001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    double maxNum = 0.0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        maxNum = max(maxNum,arr[i]);
    }

    for(int i=0;i<n;i++){
        arr[i] = (arr[i]/maxNum) * 100;
    }

    double totalSum=0;
    for(int i=0;i<n;i++){
        totalSum +=arr[i];
    }
    
    cout.precision(6);
    cout << totalSum/n;
    return 0;
}