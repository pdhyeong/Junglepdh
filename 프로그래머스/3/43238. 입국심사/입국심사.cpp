#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    long long left = 1;
    long long right = (long long) *max_element(times.begin(),times.end()) * n;
    while(left <= right){
        long long mid = (left + right) / 2;
        long long people = 0;

        for(int i = 0;i<times.size();i++){
            people += mid / times[i];
            if(people >= n){
                break;
            }
        }
        if (people >= n){
            answer = mid;
            right = mid - 1;
        }
        else if(people < n){
            left = mid + 1;
        }
    }
    return answer;
}