#include <bits/stdc++.h>
using namespace std;

int board[501][501] = {0,};
//마인크래프트
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    double b;
    cin >> n >> m >> b;

    int maxTime;
    int landMin = 267;
    int landMax = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> board[i][j];
            if(board[i][j] > landMax){
                landMax = board[i][j];
            }else if(board[i][j] < landMin){
                landMin = board[i][j];
            }
        }
    }

    int height, resultHeight = 267, time, minTime = 2147483646;
	int remove = 0, build = 0;
    for(int k=landMin;k<=landMax;k++){
        remove = 0;
        build = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                height = board[i][j] -k;
                if(height > 0){
                    remove += height;
                }
                else if(height < 0){
                    build -= height;
                }
            }
        }
        if(remove + b >= build){
            time = remove *2 + build;
            if(time <= minTime){
                minTime = time;
                resultHeight = k;
            }
        }
    }
    cout << minTime << " " << resultHeight;

    return 0;
}