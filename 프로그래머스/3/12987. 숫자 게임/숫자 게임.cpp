#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    priority_queue<int> pq1;
    priority_queue<int> pq2;
    
    for(int i = 0;i<A.size();i++){
        pq1.push(A[i]);
    }
    for(int i = 0;i<B.size();i++){
        pq2.push(B[i]);
    }
    
    while(!pq1.empty()){
        if(pq2.top() > pq1.top()){
            answer++;
            pq1.pop();
            pq2.pop();
        }
        else{
            pq1.pop();
        }
    }
    return answer;
}