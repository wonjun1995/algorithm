#include <bits/stdc++.h>
using namespace std;


int func(int n,int r,int c){
    if(n==0) return 0;
    int half = 1<<(n-1);
    if(r < half && c < half) return func(n-1,r,c);
    if(r <half && c >=half) return half*half+func(n-1,r,c-half);
    if(r>=half && c < half) return 2* half * half + func(n-1,r-half,c);
    return 3 * half * half + func(n-1,r-half,c-half);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,r,c;
    cin >> n >> r >> c;
    cout << func(n,r,c);
    return 0;
}



/* 
0 1 2 3 
4 5 6 7
8 9 10 11
12 13 14 15
 */

/* 
n=3일때 2^3 -> 8 
사각형을 계속 쪼개면서 해당 갯수를 더해주면서 순서를 계산함.

 */