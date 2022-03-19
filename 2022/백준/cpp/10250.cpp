#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        int h,w,t;
        cin >> h >> w >> t;
        int floor = t % h;
        int roomNum = t/h;
        if(floor > 0){
            roomNum++;
        }else{
            floor = h;
        }
        cout << floor*100+roomNum << '\n';
        
    }

    return 0;
}