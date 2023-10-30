#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(int n) {
    string answer = "";
    while(n > 0){
        int temp = n % 3;
        string s = "4";
        if(temp == 0){
            answer += s;
            n = n / 3 - 1;
        }
        else{
            s = to_string(n % 3);
            answer+=s;
            n = n / 3;
        }
    }
    reverse(answer.begin(),answer.end());
    return answer;
}