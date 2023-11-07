#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;
 
    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }
 
    return answer;
}
string solution(string s) {
    string answer = "";
    vector<string> st = split(s,' ');
    vector<int> temp;
    for(int i = 0;i<st.size();i++){
        temp.push_back(stoi(st[i]));
    }
    sort(temp.begin(),temp.end());
    answer += to_string(temp[0]);
    answer += " ";
    answer += to_string(temp[temp.size()-1]);
    return answer;
}