#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;

bool comapre(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }else{
        return a.second < b.second;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
	cin >> N;
	int x, y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back({ x, y });
	}
	sort(v.begin(), v.end(),comapre);
	for (int i = 0; i < N; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

    return 0;
}