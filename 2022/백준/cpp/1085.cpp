#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    int tmp1 = min(x,y);
    int tmp2 = min(w-x,h-y);
    int ans = min(tmp1,tmp2);

    cout << ans;

    return 0;
}