#include <bits/stdc++.h>
using namespace std;

int main(){

    cin.tie(0);
    int array[10];
    fill(array,array+10,0);

    int A,B,C;
    cin >> A >> B >> C;

    int temp=A*B*C;

    for(char a: to_string(temp)){
        array[a-'0']++;
    }

    for(int i : array){
        cout << i << '\n';
    }


    return 0;
}
