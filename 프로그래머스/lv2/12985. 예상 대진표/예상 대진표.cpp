#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    
    // [{(1,2) , (3,4)} , {(5,6) , (7,8)}]
    while(a != b){
        a = (a + 1) >> 1;
        b = (b + 1) >> 1;
        answer++;
    }
    return answer;
}