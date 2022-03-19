#include<iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    int N[11] = { 1, };
    int K[11] = { 1, };
    for (int i = n-k+1; i <= n; i++) {
        N[i] = i;
        N[0] *= i;
    }
    for (int i = 1; i <= k; i++) {
        K[i] = i;
        K[0] *= i;
    }
    cout << N[0] / K[0];
    
}
