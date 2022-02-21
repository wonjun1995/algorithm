#include <bits/stdc++.h>
using namespace std;

//Strfry
//문자열 -> 문자열의 끝을 표시하기 위한 말단의 NULL이 사용된, 문자들로 이루어진 문자열일 뿐
//Strfry -> 입력된 문자열을 무작위로 재배열하여 새로운 문자열을 만들어냄.
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    //테스트 케이스의 수
    int n;
    
    string s1;
    string s2;
    bool ans;
    
    cin >> n;

    
    for(int i=0;i<n;i++){
        //테스트 케이스의 수마다 초기화 필요!
        ans=true;
        int arr1[26]= {0,};
        int arr2[26]= {0,};
        
        cin >> s1 >> s2;
        if(s1.size()!=s2.size()){
            ans=false;
        }else{
            for(char c : s1){
                arr1[c-'a']++;
            }
            for(char c : s2){
                arr2[c-'a']++;
            }
            for(char c : s2){
                if(arr2[c-'a']!=arr1[c-'a']){
                    ans=false;
                    break;
                }
            }
        }
        if(ans){
            cout << "Possible" << '\n';
        }
        else{
            cout << "Impossible"<< '\n';
        } 
    }
}