#include <bits/stdc++.h>
using namespace std;

//방 배정
//남학생은 남학생끼리, 여학생은 여학생끼리 방배정
//한 방에는 같은 학년의 학생들을 배정
//한 방에 한명도 가능
//한 방에 배정할 수 있는 최대 인원 수 K가 주어졌을 때, 조건에 맞게 모든 학생을 배정하기 위해 필요한 방의 최소 개수를 구하시오. 
int arr[2][6];
int main(){
    //입력
    //수학여행에 참가하는 학생 수 N
    //한 방에 배정할 수 있는 최대 인원수 K

    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int s,y;
        cin >> s >> y;
        arr[s][y-1]++;
    }

    int answer=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<6;j++){
            answer+=arr[i][j]/k;
            if(arr[i][j]%k != 0) answer++;
        }
    }
    cout << answer;

}