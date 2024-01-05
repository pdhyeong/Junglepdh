#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int a1 = common[1] - common[0];
    if(a1 == 0){
        return common[0];
    }
    if(common[2] - common[1] == a1){
        return common[common.size()-1]+a1;
    }
    else{
        return common[common.size()-1] * (common[1] / common[0]);
    }
}