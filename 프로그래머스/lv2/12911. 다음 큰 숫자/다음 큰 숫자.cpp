#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(int n) {
    int answer = 0;
    string bit;
    int saven = n;
    while(n > 0){
        if(n & 1){
            bit += "1";
        }else{
            bit += "0";
        }
        n = n >> 1;
    }
    bit+="0";
    reverse(bit.begin(), bit.end());
    next_permutation(bit.begin(),bit.end());
    reverse(bit.begin(), bit.end());
    
    for(int i = 0;i<bit.size();i++){
        if(bit[i] == '1'){
            answer += pow(2,i);
        }
    }
    return answer;
}