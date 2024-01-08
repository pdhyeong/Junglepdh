#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    return a.first > b.first;
}
int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int,int> mymap;
    vector<pair<int,int>> now;
    for(int i = 0;i<tangerine.size();i++){
        mymap[tangerine[i]]++;
    }
    for(auto & pair:mymap){
        now.push_back({pair.second,pair.first});
    }
    sort(now.begin(),now.end(),comp);
    for(int i = 0;i<now.size();i++){
        k -= now[i].first;
        answer++;
        if(k <= 0){
            break;
        }
    }
    return answer;
}