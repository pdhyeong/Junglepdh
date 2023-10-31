#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for(long i = left+1;i<=right+1;i++){
        if(i % n == 0){
            answer.push_back(n);
        }
        else{
            answer.push_back(max(i/n+1,i % n));
        }
    }
    return answer;
}