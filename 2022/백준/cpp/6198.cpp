#include <bits/stdc++.h>
using namespace std;

//옥상 정원 꾸미기
//2493 탑의 반대문제이라고 생각됨.
//O(n)
//스택의 사이즈를 더하는건 지금 있는 건물들에서 벤치마킹 할 수 있는 경우의 수가 되게 함.
//이를 반대로 생각해보면, 1번은 아무도 볼 수 없고, 2번은 1번에서만 볼 수 있다. 또한 3번은 1번에서만 볼 수 있고, 4번은 1, 3번에서만 볼 수 있다.
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    stack<long long> st;
    long long ans=0;
    for(int i=0;i<n;i++){
        long long num;
        cin >> num;
        while(!st.empty()){
            if(st.top() <= num){
                st.pop();
            }else{
                break;
            }
        }
        st.push(num);
        ans+=st.size()-1;
    } 
    cout << ans;
    return 0;
}

//1. 스택의 top에 위치한 빌딩의 높이가 i 번째 빌딩의 높이보다 작거나 같을 경우 i 번째 빌딩의 옥상을 볼 수 없으므로 스택의 top이 i 번째 빌딩의 높이보다 높을 때까지 pop을 해줍니다.

//2. 스택에 i 번째 빌딩의 높이를 push 해줍니다.

//3. i 번째 빌딩을 제외한 나머지 빌딩들이 i 번째 빌딩의 옥상을 볼 수 있으므로 결과에 (스택의 크기 - 1)을 더해줍니다.