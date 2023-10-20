#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    map<string,int> dict;
    int num = 1;
    for(char i = 'A';i<='Z';i++){
        string a = "";
        a += i;
        dict[a] = num++;
    }
    string s ="";
    for(int i = 0;i<msg.size();i++){
        s += msg[i];
        if(dict.find(s) == dict.end()){
            dict[s] = num++;
            s = s.substr(0,s.size()-1);
            answer.push_back(dict[s]);
            s = "";
            i--;
        }
    }
    answer.push_back(dict[s]);
    return answer;
}