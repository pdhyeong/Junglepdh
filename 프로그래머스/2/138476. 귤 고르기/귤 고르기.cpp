#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;
bool comp(pair<int,int> le,pair<int,int> ri){
    return le.second > ri.second;
}
int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int,int> mymap;
    vector<pair<int,int>> vec;
    for(int i = 0;i<tangerine.size();i++){
        mymap[tangerine[i]]++;
    }
    for(const auto & pair : mymap){
        vec.push_back({pair.first,pair.second});
    }
    sort(vec.begin(),vec.end(),comp);
    for(int i = 0;i<vec.size();i++){
        k -= vec[i].second;
        answer++;
        if(k <= 0){
            break;
        }
    }
    return answer;
}