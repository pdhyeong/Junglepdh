#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;
string switch_Ternary(int n){
    string s ="";
    while(n > 0){
        s += to_string(n%3);
        n /= 3;
    }
    return s;
}
int solution(int n) {
    int answer = 0;
    string temp = switch_Ternary(n);
    for(int i = temp.size()-1;i>=0;i--){
        answer += (temp[i]-'0') * pow(3,(temp.size()-i-1));
    }
    return answer;
}