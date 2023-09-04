#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int i,j;
    int arr[3001];fill_n(arr,3001,1);
    for(i = 2;i<=sqrt(3000);i++){
        if(arr[i] == 1){
            for(j = 2;i*j <=3000;j++){
                arr[i*j] = 0;
            }
        }
    }
    for(int i = 0;i < nums.size();i++){
        for(int j = i + 1; j < nums.size(); j++){
            for(int k = j + 1; k<nums.size(); k++){
                if(arr[nums[i] + nums[j] + nums[k]]){
                    answer++;
                }
            }
        }
    }
    return answer;
}