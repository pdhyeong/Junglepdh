#include <string>
#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <cctype>
#include <cmath>
using namespace std;
map<string,int> mymap1;
map<string,int> mymap2;
vector<string> change_str(string str1){
    vector<string> check1;
    for(int i = 0;i<str1.size()-1;i++){
        string sub = str1.substr(i,2);
        bool flag = false;
        for (char &c : sub) {
           if (isalpha(c)) {
               c = tolower(c);
            } else {
               flag = true;
               c = ' ';
            }
        }
        if(!flag){
            check1.push_back(sub);
        }
    }
    return check1;
}
int solution(string str1, string str2) {
    int answer = 0;
    vector<string> set1 = change_str(str1);
    vector<string> set2 = change_str(str2);
    map<string,int> insection;
    map<string,int> reinsection;
    for(int i = 0;i<set1.size();i++){
        mymap1[set1[i]]++;
    }
    for(int i = 0;i<set2.size();i++){
        mymap2[set2[i]]++;
    }
    for(const auto & pair: mymap1){
        if(mymap2.find(pair.first) != mymap2.end()){
            reinsection[pair.first] = min(pair.second,mymap2[pair.first]);
        }
    }
    for(const auto & pair: mymap1){
        if(mymap2.find(pair.first) != mymap2.end()){
            insection[pair.first] = max(pair.second,mymap2[pair.first]);
        }
        else{
            insection[pair.first] = pair.second;
        }
    }
    for(const auto & pair: mymap2){
        if(mymap1.find(pair.first) != mymap1.end()){
            insection[pair.first] = max(pair.second,mymap1[pair.first]);
        }
        else{
            insection[pair.first] = pair.second;
        }
    }
    double as = 0;
    double bs = 0;
    for(const auto &pair: reinsection){
        as += pair.second;
    }
    for(const auto &pair: insection){
        bs += pair.second;
    }
    double re = as / bs;
    if(re>0){
        answer = floor(re*65536);
    }
    else{
        cout << as << ' ' << bs;
        if(as == 0 && bs != 0){
            return 0;
        }
        else if(as != 0 && bs == 0){
            return 0;
        }
        return 65536;
    }
    return answer;
}