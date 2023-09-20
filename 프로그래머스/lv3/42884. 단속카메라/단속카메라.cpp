#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 0;
    sort(routes.begin(),routes.end());
    int install = routes[0][0]-1;
    for(int i = 0;i<routes.size();i++){
        int in = routes[i][0];
        int out = routes[i][1];
        if(in > install){
            answer++;
            install = out;
        }
        install = min(out,install);
    }
    return answer;
}