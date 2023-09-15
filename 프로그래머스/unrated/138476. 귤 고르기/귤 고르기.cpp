#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int,int> mymap;
    vector<pair<int,int>> sortmap;
    for(int i = 0;i<tangerine.size();i++){
        if(mymap.find(tangerine[i]) != mymap.end()){
            mymap[tangerine[i]] += 1;
        }
        else{
            mymap[tangerine[i]] = 1;
        }
    }
    for(const auto &pair : mymap){
        sortmap.push_back({pair.second,pair.first});
    }
    sort(sortmap.rbegin(),sortmap.rend());
    for(int i = 0;i<sortmap.size();i++){
        k -= sortmap[i].first;
        answer++;
        if(k <= 0){
            break;
        }
    }
    return answer;
}