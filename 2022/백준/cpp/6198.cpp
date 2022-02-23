#include <bits/stdc++.h>
using namespace std;

//옥상 정원 꾸미기
//2493 탑의 반대문제이라고 생각됨.
//O(n)
int main(){
    int n;
    cin >> n;

    vector<int> vc;
    //vector에 값을 넣고
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        vc.push_back(num);
    } 

    for(int i=0;i<n-1;i++){
        cout << i+1 << ' ';
        stack<int> st;
        for(int j=i;j<n;j++){
            if(vc[i]<vc[j]){
                break;
            }
            //1번 2번 3번 --- 5번까지 관리인이 옥상을 확인함.
            st.push(vc[j]);
            cout << st.top() <<' '<< st.size()<<'\n';
        }
        //cout << '\n';
    }
    /* int ans=0;
    for(auto c: vc){
        ans+=c;
    }
    cout << ans; */
    return 0;
}

//10 3 7 4 12 2
//10 3 7 4 ////12는 10보다 크니까 안됨.
//3 ////7은 3보다 크니까 안됨.
//7 4 ////12는 7보다 크니까 안됨.
//4 ////12는 4보다 크니까 안됨.
//12 2
//2는 마지막이므로 확인 X