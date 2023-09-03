#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    while(n > 0){
        int mod = n % 10;
        answer += mod;
        n /= 10;
    }
    return answer;
}