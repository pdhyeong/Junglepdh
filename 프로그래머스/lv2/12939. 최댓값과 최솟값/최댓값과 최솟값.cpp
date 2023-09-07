#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
vector<string> split(string input,char delimiter){
    vector<string> answer;
    stringstream ss(input);
    string temp;
    
    while(getline(ss,temp,delimiter)){
        answer.push_back(temp);
    }
    return answer;
}
string solution(string s) {
    string answer = "";
    vector<string> st = split(s,' ');
    int tempst1 = stoi(st[0]);
    int tempst2 = stoi(st[0]);
    for(int i = 0;i<st.size();i++){
        tempst1 = min(tempst1,stoi(st[i]));
        tempst2 = max(tempst2,stoi(st[i]));
    }
    answer = to_string(tempst1) + ' ' + to_string(tempst2);
    return answer;
}