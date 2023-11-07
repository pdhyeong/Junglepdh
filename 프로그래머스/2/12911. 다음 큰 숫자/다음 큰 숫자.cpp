#include <string>
#include <vector>

using namespace std;
// 비트의 갯수가 같은 바로 다음 자연수
int bitcheck(int n){
    int bitcount = 0;
    while(n > 0){
        if(n & 1){
            bitcount++;
        }
        n = n >> 1;
    }
    return bitcount;
}
int solution(int n) {
    int temp = bitcheck(n);
    while(1){
        n++;
        if(temp == bitcheck(n)){
            break;
        }
    }
    return n;
}