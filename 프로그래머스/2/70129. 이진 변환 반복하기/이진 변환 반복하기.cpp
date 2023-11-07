#include <string>
#include <vector>
#include <iostream>
using namespace std;
// s 의 모든 0 을 제거
// 제거한 0를 s로 다시 만들고 s를 다시 이진법으로 표현한것을 반복
vector<int> solution(string s) {
    vector<int> answer(2);
    while(s != "1"){
        int zerocount = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '0'){
                zerocount++;
            }
        }
        string temp = "";
        answer[1] += zerocount;
        int delsize = s.size() - zerocount;
        while(delsize > 0){
            if(delsize & 1){
                temp += "1";
            }
            else{
                temp += "0";
            }
            delsize = delsize >> 1;
        }
        s = temp;
        answer[0]++;
    }
    return answer;
}