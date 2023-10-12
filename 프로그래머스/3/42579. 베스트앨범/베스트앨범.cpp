#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(pair<int,string> a,pair<int,string> b){
    return a.first > b.first;
}
vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string,vector<pair<int,int>>> cate;
    map<string,int> list;
    for(int i = 0;i<genres.size();i++){
        cate[genres[i]].push_back({plays[i],i});
        if(list.find(genres[i]) != list.end()){
            list[genres[i]] += plays[i];
        }
        else{
            list[genres[i]] = plays[i];
        }
    }
    vector<pair<int,string>> comp;
    for(const auto & pair:list){
        comp.push_back({pair.second,pair.first});
    }
    sort(comp.begin(),comp.end(),compare);
    
    // for(int i = 0;i<comp.size();i++){
    //     cout << comp[i].first << ' ' <<comp[i].second << '\n';
    // }
    // cout << '\n';
    /* 
    판단 선
    */
    for (auto& entry : cate) {
        vector<pair<int, int>>& vec = entry.second;
        stable_sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            return a.first > b.first; 
        });
    }
    // for(const auto &entry : cate){
    //     cout << entry.first << '\n';
    //     for (const auto& pair : entry.second) {
    //         cout << "("<< pair.first << ", " << pair.second << ")" << '\n';
    //     }
    // }
    for(int i = 0;i<comp.size();i++){
        for(int j = 0;j<cate[comp[i].second].size() && j < 2;j++){
            answer.push_back(cate[comp[i].second][j].second);
        }
    }
    return answer;
}