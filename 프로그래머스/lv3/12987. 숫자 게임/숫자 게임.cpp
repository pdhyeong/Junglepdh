#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    priority_queue<int> max_heap_a, max_heap_b;
    
    for (int num : A) {
        max_heap_a.push(num);
    }
    
    for (int num : B) {
        max_heap_b.push(num);
    }
    
    while (!max_heap_a.empty() && !max_heap_b.empty()) {
        int am = max_heap_a.top();
        int bm = max_heap_b.top();
        
        if (am < bm) {
            answer++;
        } else {
            max_heap_b.push(bm);
        }
        
        max_heap_a.pop();
        max_heap_b.pop();
    }
    
    return answer;
}
