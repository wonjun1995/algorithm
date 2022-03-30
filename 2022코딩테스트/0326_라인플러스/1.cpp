#include<bits/stdc++.h>
using namespace std;

//로그 수집 프로그램
//특정 조건들을 만족한 로그들만 수집
//team_name: t application_name : a error_level : e message : m 형식
//한칸의 공백으로 구분되어 있어야 함.
//로그의 길이는 100이하여야 함.
//로그에 공백이 있으면 안됨.


int solution(vector<string> logs) {
    std::regex re("^team_name : [a-zA-Z]* application_name : [a-zA-Z]* error_level : [a-zA-Z]* message : [a-zA-Z]*");
    int answer = 0;
    for(auto c : logs){
        if(c.size() > 100 || !regex_match(c,re)){
            cout <<c.size() <<' ' << c << '\n';
            answer++;
        } 
    }
    return answer;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    

    return 0;
}


/* 

["team_name : db application_name : dbtest error_level : info message : test124", "team_name : test application_name : I DONT CARE error_level : error message : x", "team_name : ThisIsJustForTest application_name : TestAndTestAndTestAndTest error_level : test message : IAlwaysTestingAndIWillTestForever", "team_name : oberervability application_name : LogViewer error_level : error"]
 ["team_name : MyTeam application_name : YourApp error_level : info messag : IndexOutOfRange", "no such file or directory", "team_name : recommend application_name : recommend error_level : info message : RecommendSucces11", "team_name : recommend application_name : recommend error_level : info message : Success!", "   team_name : db application_name : dbtest error_level : info message : test", "team_name     : db application_name : dbtest error_level : info message : test", "team_name : TeamTest application_name : TestApplication error_level : info message : ThereIsNoError"]
 */