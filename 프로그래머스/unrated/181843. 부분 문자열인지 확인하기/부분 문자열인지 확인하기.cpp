#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    for(int i = 0;i<my_string.size();i++){
        string s = my_string.substr(i,target.size());
        if(s == target){
            return 1;
        }
    }
    return answer;
}