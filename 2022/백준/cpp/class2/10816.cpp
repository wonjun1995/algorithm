#include <bits/stdc++.h>
using namespace std;

//숫자 카드2
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n;
    vector<int> vc;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        vc.push_back(x);
    }
    sort(vc.begin(),vc.end());

    cin >> m;
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        //찾으려는 키값의 배열 몇 번째에서 초과가 나는지 계산 후 찾으려는 키값의 배열 시작 번째 값을 뺴주면 개수 세기 가능
        cout << upper_bound(vc.begin(),vc.end(),x) - lower_bound(vc.begin(),vc.end(),x) << ' ';
    }

    return 0;
}