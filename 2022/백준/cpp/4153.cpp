#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while(true){

        int arr[3];
        for(int i=0;i<3;i++){
            cin >> arr[i];
        }
        sort(arr,arr+3);
        
        
        if(arr[0] == 0 || arr[1] == 0 || arr[2] ==0) break;
        
        if((arr[0]*arr[0] + arr[1]*arr[1]) == (arr[2]*arr[2])) cout << "right\n";
        else cout << "wrong\n";
    }
    
    return 0;
}