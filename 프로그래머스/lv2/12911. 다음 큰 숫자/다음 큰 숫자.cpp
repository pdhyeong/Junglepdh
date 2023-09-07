#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int cntone(int n){
    int answer = 0;
    while(n > 0){
        if(n & 1){
            answer += 1;
        }
        n = n >> 1;
    }
    return answer;
}
int solution(int n) {
    int temp = cntone(n);
    while(true){
        n++;
        if(temp == cntone(n)){
            return n;
        }
    }
}