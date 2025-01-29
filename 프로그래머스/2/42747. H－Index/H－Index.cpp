#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void vectorchecker(vector<int> &check) {
    for(int i = 0;i<check.size();i++){
        cout << check[i] << ' ';
    }
}

int solution(vector<int> citations) {
    int answer = 0;
    
    sort(citations.begin(),citations.end());
    
    for(int i = 0;i<citations.size();i++){
        // 5편중 0번 이상 인용된 논문 5개  -> 5편중 1번 이상 인용된 논문 4개 -> 5편중 3번 이상 인용된 논문 3개
        if(citations[i] >= citations.size() - i){
            answer = citations.size() - i;
            break;
        }
    }
    return answer;
}