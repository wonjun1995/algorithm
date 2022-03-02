#include <bits/stdc++.h>
using namespace std;

//회전하는 큐
// 큐에 처음에 포함되어 있던 수 N이 주어짐.
//지민이가 뽑아내려고 하는 원소의 위치 주어짐.
//원소를 주어진 순서대로 뽑아내는데 드는 2,3번 연산의 최솟값을 출력하시오.
int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    int count=0;
    int idx;
    int input;
    deque<int> dq;
    //큐의 크기 n , 뽑아내려고 하는 수의 개수 M
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        dq.push_back(i);
    }

    /* for(auto c : dq){
        cout << c << '\n';
    } */

    for(int i=0;i<m;i++){
        cin >> input;

        for(int j=0;j<dq.size();j++){
            if(dq[j] == input){
                idx=j;
                //cout << idx << '\n';
                break;
            }
        }

        if(idx < (dq.size()-idx)){
            while(true){
                if(dq.front() == input){
                    dq.pop_front();
                    break;
                }
                dq.push_back(dq.front());
                dq.pop_front();
                count++;
            }
        }else{
            while(true){
                if(dq.front() == input){
                    dq.pop_front();
                    break;
                }
                dq.push_front(dq.back());
                dq.pop_back();
                count++;
            }
        }
    }


    cout << count <<'\n';



    return 0;
}