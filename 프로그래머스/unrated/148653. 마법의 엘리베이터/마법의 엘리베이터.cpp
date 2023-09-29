#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int storey) {
    int answer = 0;
    while(storey > 0){
        int temp = storey % 10;
        if(temp == 5 && storey / 10 % 10 >= 5 || temp > 5){
            storey += 10 - temp;
            answer += 10 - temp;
        }
        else{
            answer += temp;
        }
        storey = storey / 10;
    }
    return answer;
}