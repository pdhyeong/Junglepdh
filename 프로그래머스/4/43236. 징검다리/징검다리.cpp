#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    int answer = 0;
    sort(rocks.begin(),rocks.end());
    rocks.push_back(distance);
    int start = 1;
    int end = distance;
    while(start <= end){
        int mid = (start + end) / 2;
        int remove = 0;
        int prev = 0;
        for(int i = 0;i<rocks.size();i++){
            if(rocks[i] - prev < mid){
                remove++;
            }
            else{
                prev = rocks[i];
            }
        }
        if(remove > n){
            end = mid - 1;
        }
        else{
            start = mid + 1;
            answer = answer < mid ? mid : answer;
        }
    }
    return answer;
}