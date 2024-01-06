#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first < b.first;
}
vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<pair<int,int>> sublist;
    for(int i = 0;i<numlist.size();i++){
        sublist.push_back({abs(n -numlist[i]),numlist[i]});
    }
    sort(sublist.begin(),sublist.end(),comp);
    for(int i = 0;i<sublist.size();i++){
        answer.push_back(sublist[i].second);
    }
    return answer;
}