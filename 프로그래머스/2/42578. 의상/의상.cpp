#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string,int> mymap;
    
    for(int i = 0;i<clothes.size();i++){
        mymap[clothes[i][1]]++;
    }
    for(const auto &pair : mymap){
        answer *= (pair.second+1);
    }
    return answer-1;
}