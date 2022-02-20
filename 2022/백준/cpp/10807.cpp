#include <bits/stdc++.h>
using namespace std;

//총 N개의 정수가 주어졌을 때, 정수 V가 몇 개인지 구하는 프로그램을 작성하시오.
int main(){
    int n;
    int v;
    int arr[201];
    cin >> n;
    fill(arr,arr+201,0);
    for(int i=0;i<n;i++){
        int x;

        cin >> x;
        arr[x+100]++;
    }
    cin >> v;

    cout << arr[v+100];

}