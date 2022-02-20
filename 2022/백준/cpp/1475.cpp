#include <bits/stdc++.h>
using namespace std;

// 방번호
//다솜이는 은진이의 옆집에 새로 이사왔다.
//다솜이의 옆집에서는 플라스틱 숫자를 한 세트로 팜.
// 세트 하나에는 0-9까지 숫자 하나씩 들어있음.
//다솜이의 방 번호가 주어졌을 때 필요한 세트의 개수의 최솟값을 출력하쇼
//9 와 6 은 같이 쓸 수 있음.
int main(){

    string num;
    cin >> num;

    int array[10];
    fill(array,array+10,0);

    int answer=0;
    for(char a: num){
        array[a-'0']++;
        //6,9에 대한 조건...
        //a가 6이나 9이면 같은 것으로 본다...
        
    }
    int temp = array[6]+ array[9];
    if(temp >= 2){
        array[6] = temp/2 + temp%2;
        array[9] = temp/2 + temp%2;
    }
    

    for(int i=0;i<10;i++){
        answer=max(answer,array[i]);
    }

    cout << answer;

}
