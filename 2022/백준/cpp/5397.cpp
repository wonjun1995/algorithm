#include <bits/stdc++.h>
using namespace std;

//창영이는 강산이의 비밀번호 훔치기 위해 강산이 컴에 키로거 설치함.
//키로거는 사용자가 키보드를 누른 명령을 모두 기록함. 
//따라서, 강산이가 비밀번호를 입력할 때, 화살표나 백스페이스를 입력해도 정확한 비밀번호를 알아낼수있음.
//강산이는 키보드로 입력한 키는 알파벳 대문자, 소문자, 숫자, 백스페이스, 화살표
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //입력 조건
    //테스트케이스 수
    
    int n;
    cin >> n;

    //입력한 순서대로 길이가 L인 문자열이 주어짐.
    //백스페이스를 입력했다면 '-'가 주어짐. 이때 커서의 바로 앞에 글자가 존재하면 그 글자를 지움.
    //화살표의 입력은 < > 로 주어짐. 1만큼 움직인다는 이야기.
    //물론 나중에 백스페이스 통해서 지울 수 있음.
    //만약 커서의 위치가 줄의 마지막이 아니라면, 커서 및 커서 오른쪽에 있는 모든 문자는 오른쪽으로 한칸 이동.

    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        list<char> list;
        auto curser=list.begin();
        for(char c : s){
            if(c == '<'){
                //왼쪽으로 한칸 이동
                if(curser != list.begin()) curser--;
            }
            else if(c == '>'){
                //오른쪽으로 한칸 이동
                 if(curser != list.end()) curser++;
            }
            else if(c == '-'){
                //백스페이스
                if(curser != list.begin()){
                    curser=list.erase(--curser);
                }
            }else{
                //보통 데이터 넣는거
                list.insert(curser,c);
            }
        }
        for (char c : list){
            cout << c;
        }
        cout << '\n';
    }
    return 0;
}