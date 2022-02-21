#include <bits/stdc++.h>
using namespace std;

//에너그램 만들기
//두 영어 단어가 철자의 순서를 뒤바꾸어 같아질 수 있을 때 에너그램 관계
//두 개의 영어 단어가 주어졌을 때, 두 단어가 서로 애너그램 관계에 있도록 만들기 위해서 제거해야 하는 최소 개수의 문자 수를 구하시오.
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    //각각의 길이는 1000자를 넘지 않으며, 적어도 한 글자로 이루어진 단어가 주어짐.
    string s1;
    string s2;
    int arr1[26]={0,};
    int arr2[26]={0,};

    cin >> s1 >> s2;
    int ans=0;
    for(char c:s1){
        arr1[c-'a']++;
    }
    for(char c:s2){
        arr2[c-'a']++;
    }
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            ans+=(arr1[i]+arr2[i]);
        }
    }
    cout << ans;

}