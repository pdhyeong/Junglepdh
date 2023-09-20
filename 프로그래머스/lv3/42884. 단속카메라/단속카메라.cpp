#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 1;
    if(routes.size() == 1){
        return answer;
    }
    int start = 30000;
    sort(routes.begin(),routes.end());
    for(int i = 0;i<routes.size();i++){
        int in = routes[i][0];
        int out = routes[i][1];
        if(in > start){
            answer++;
            start = out;
        }
        start = min(out,start);
    }
    
    return answer;
}