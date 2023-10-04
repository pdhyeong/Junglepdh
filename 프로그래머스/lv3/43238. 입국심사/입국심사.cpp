#include <string>
#include <vector>

using namespace std;
long long max(vector<int> &times){
    long long max = 0;
    for(int i = 0;i<times.size();i++){
        if(max < times[i]){
            max = times[i];
        }
    }
    return max;
}
long long solution(int n, vector<int> times) {
    long long answer = 0;
    long long start = 1;
    long long end = max(times) * n;
    
    while(start <= end){
        long long mid = (start + end) / 2;
        long long people = 0;
        
        for(int i = 0;i<times.size();i++){
            people += mid / times[i];
            if(people >= n){
                break;
            }
        }
        if(people >= n){
            answer = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return answer;
}