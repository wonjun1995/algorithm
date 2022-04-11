#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll pow(ll a, ll b, ll m){
    if(b == 1) return a % m;
    ll ans = pow(a,b/2,m);
    ans = ans * ans % m;
    if(b%2 == 0) return ans;
    return ans * a % m;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c;
    cin >> a >> b >> c;
    cout << pow(a,b,c);
}

//a^b mod m
/* int func1(int a, int b, int m){
    int val =1;
    while(b--){
        val *=a;
    }
    return val & m;
} */
/* 
이라고 생각할 수 있지만 int overflow가 발생하기 때문에 곱하는 중간중간 나눠서 나머지만 챙겨가야함.

a^n * a^n = a^2n

pow(5,7,3) -> pow(5,3,3) -> (5,1,3) 이런식으로 b의 차수를 2로 나누면서 값을 계산
b가 짝수이면 그냥 val의 값을 반환하면 끝이지만, b가 홀수이면 val에 a를 한 번 더 곱해서 반환해야 함.

 */
