#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    int arr[1000001]={0,};
    
    for(int i= 2;i<=n;i++){
        for(int j = 2;i*j<=n;j++){
            arr[i*j] = 1;
        }
    }
    for(int i = 2;i<=n;i++){
        if(arr[i] == 0){
            answer += 1;
        }
    }
    return answer;
}