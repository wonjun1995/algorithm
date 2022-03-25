#include <bits/stdc++.h>
using namespace std;

//부녀회장이 될테야
//재귀 문제
//k층의 n호는 k-1층의 n호와 k층의 n-1호의 합과 같음
int getCnt(int k,int n){
    if(n==1)
        return 1;
    if(k ==0)
        return n;

    return getCnt(k-1,n) + getCnt(k,n-1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int k,n;
        cin >> k >> n;
        cout << getCnt(k,n) << '\n';
    }
    
    

    return 0;
}