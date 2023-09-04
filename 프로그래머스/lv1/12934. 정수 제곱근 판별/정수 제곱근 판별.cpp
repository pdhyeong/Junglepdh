#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if(sqrt(n) - (long long) sqrt(n) == 0){
        return pow(sqrt(n) + 1,2);
    }
    else{
        return -1;
    }
    return answer;
}