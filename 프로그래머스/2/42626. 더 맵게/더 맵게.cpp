#include <string>
#include <vector>
#include <queue>
using namespace std;
// 모든 음식의 스코빌 지수를 k이상으로 만드려고 함.
// 스코빌 지수가 가장 낮은 두개의 음식을 섞어서 
// 1번째 + (2번째 * 2) 
// 위 식으로 했을때 k이상이 될때까지 반복하여 섞는다.
//최소 횟수를 Return 하시오

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 0;i<scoville.size();i++){
        pq.push(scoville[i]);
    }
    while(pq.size() > 1){
        if(pq.top() >= K)
            return answer;
        int fir = pq.top();
        pq.pop();
        int sec = pq.top();
        pq.pop();
        int comp = fir + (sec * 2);
        pq.push(comp);
        answer++;
    }
    if(pq.top() < K){
        return -1;
    }
    return answer;
}