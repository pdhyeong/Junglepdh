#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.rbegin(),score.rend());
    const int n = score.size();
    for(int i = m-1;i<n;i+=m){
        answer += (m * score[i]);
    }
    return answer;
}