#include<bits/stdc++.h>
using namespace std;

int rev(int n) {
	string s = to_string(n);
	reverse(s.begin(), s.end());
	return atoi(s.c_str());
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n1,n2;
    cin >> n1 >> n2;

    int ans1,ans2;
    ans1 = rev(n1);
    ans2 = rev(n2);

    if(ans1 > ans2) cout << ans1;
    else cout << ans2;


    return 0;
}

/* 
734 893
 */