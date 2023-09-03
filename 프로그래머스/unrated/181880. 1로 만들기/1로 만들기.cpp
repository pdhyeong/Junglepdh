#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for(int i = 0;i<num_list.size();i++){
        int num = num_list[i];
        int cnt = 0;
        while(num > 1){
            if(num % 2 == 0){
                num /= 2;
            }
            else{
                num = (num-1) / 2;
            }
            cnt += 1;
        }
        answer += cnt;
    }
    return answer;
}