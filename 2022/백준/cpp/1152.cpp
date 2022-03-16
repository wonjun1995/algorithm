#include <bits/stdc++.h>
using namespace std;

vector<string> split(string str, char delimiter){
    istringstream iss(str);
    string buffer;

    vector<string> result;

    while(getline(iss,buffer,delimiter)){
        cout << buffer << '\n';
        result.push_back(buffer);
    }

    return result;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s[];
    cin >> s;

    vector<string> res = split(s,' ');

    cout << res.size();

    return 0;
}