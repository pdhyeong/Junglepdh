#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string,int> mymap;
    
    for(int i = 0;i<clothes.size();i++){
        if(mymap.find(clothes[i][1]) != mymap.end()){
            mymap[clothes[i][1]]++;
        }
        else{
            mymap[clothes[i][1]] = 1;
        }
    }
    
    for(auto it = mymap.begin();it != mymap.end();it++){
        answer *= (it->second+1);
    }
    return answer-1;
}