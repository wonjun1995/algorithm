#include <bits/stdc++.h>
using namespace std;


//두 수의 합
//n개의 서로 다른 양의 정수 a1,a2,a3---an으로 이루어진 수열이 있음.
//ai의 값은 1보다 크거나 같고, 1,000,000보다 작거나 같은 자연수.
//자연수 ai + aj = X을 만족하는 (ai,aj) 쌍의 수를 구하시오.
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);

    //수열의 크기
    int n;
    cin >> n;
    //수열에 포함되는 수
    int array[1000001];
    int resultArr[2000001];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    
    //X의 값
    int x;
    cin >> x;

    int count=0;
    
    //시간 복잡도 O(N)을 가지고 있음.
    for(int i=0;i<n;i++){
        //x-array[i]가 양수여야 함.
        if((x-array[i]) > 0){
            if(resultArr[x-array[i]] == 1){
                count++;
            }else{
                resultArr[array[i]]=1;
            }
        }
    }

    cout << count;

}