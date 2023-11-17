#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer(2,0);
    int sum = 0;
    int start = 0;
    int end = 0;
    int save_min = 1e9;
    for(int i = 0;i<sequence.size();i++){
        sum += sequence[i];
        end = i;
        while(sum > k){
            sum -= sequence[start++];
        }
        if(sum == k){
            if(end - start < save_min){
                answer[0] = start;
                answer[1] = end;
                save_min = end - start;
            }
        }
    }
    return answer;
}