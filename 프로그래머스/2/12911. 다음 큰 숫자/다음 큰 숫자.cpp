#include <string>
#include <vector>
#include <iostream>
using namespace std;
int bitcheck(int n){
    int bit = 0;
    while(n > 0){
        if(n & 1){
            bit++;
        }
        n = n >> 1;
    }
    return bit;
}
int solution(int n) {
    int answer = 0;
    int bit = bitcheck(n);
    while(1){
        n++;
        if(bit == bitcheck(n)){
            break;
        }
    }
    return n;
}