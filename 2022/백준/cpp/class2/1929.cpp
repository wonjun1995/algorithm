#include <bits/stdc++.h>
using namespace std;
//소수 구하기
bool prime(int n){
    if(n<2)
        return false;
    
    for(int i=2;i*i<=n;++i){
        if(n%i==0)
            return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;
    cin >> m >> n;

    for(int i =m;i<=n;i++){
        if(prime(i)){
            cout << i << '\n';
        }
    }
    return 0;
}