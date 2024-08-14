#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<char,int> mp;
int solution(string s) {
    int answer = 0;
    char x_str = s[0];
    int xcount = 1;
    int othercount = 0;
    for(int i = 1;i<s.size();i++){
        if(xcount == 0){
            x_str = s[i];
        }
        if(s[i] == x_str){
            xcount++;
        }
        else{
            othercount++;
        }
        if(xcount == othercount){
            answer++;
            xcount = 0;
            othercount = 0;
        }
    }
    if(xcount > 0 || othercount > 0){
        answer++;
    }
    return answer;
}