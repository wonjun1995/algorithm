#include <bits/stdc++.h>
using namespace std;

//총 N개의 정수가 주어졌을 때, 정수 V가 몇 개인지 구하는 프로그램을 작성하시오.
int main(){
    int n;
    cin >> n;
    int arr[201];

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x < 0){
            arr[x+100]++;
        }else{
            arr[x]++;
        }
    }
    int v;
    cin >> v;
    if(v<0){
        cout << arr[v+100];
    }else{
        cout << arr[v];
    }

}