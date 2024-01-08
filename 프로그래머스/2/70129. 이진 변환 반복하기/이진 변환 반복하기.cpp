#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> solution(string s) {
    vector<int> answer;
    int count = 0;
    int total = 0;
    while(s != "1"){
        int check_zero = 0;
        int change_size = 0;
        string as = "";
        for(int i = 0;i<s.size();i++){
            if(s[i] == '0'){
                check_zero++;
            }
        }
        change_size = s.size() - check_zero;
        while(change_size > 0){
            if(change_size % 2 ==0){
                as += "0";
            }
            else{
                as += "1";
            }
            change_size /= 2;
        }
        reverse(as.begin(),as.end());
        s = as;
        count++;
        total += check_zero;
    }
    answer.push_back(count);
    answer.push_back(total);
    return answer;
}