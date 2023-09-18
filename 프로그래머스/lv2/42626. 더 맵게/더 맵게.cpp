#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue <int, vector<int>, greater<int> > pq;
    for(int i = 0;i<scoville.size();i++){
        pq.push(scoville[i]);
    }
    while(pq.top() < K && pq.size() > 1){
        int s1 = pq.top();
        pq.pop();
        int s2 = pq.top();
        pq.pop();
        pq.push(s1 + s2*2);
        answer++;
    }
    if(pq.top() < K){
        return -1;
    }
    return answer;
}