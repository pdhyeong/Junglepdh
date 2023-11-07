#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2);
    map<string,int> mymap;
    
    for(int i = 0;i<words.size();i++){
        mymap[words[i]]++;
    }
    mymap.erase(words[0]);
    for(int i = 1;i<words.size();i++){
        char pre = words[i-1][words[i-1].size()-1];
        char now = words[i][0];
        if(pre != now){
            answer[0] = i % n + 1;
            answer[1] = i / n + 1;
            return answer;
        }
        if(mymap[words[i]] < 1){
            answer[0] = i % n + 1;
            answer[1] = i / n + 1;
            return answer;
        }
        mymap.erase(words[i]);
    }
    return {0,0};
}