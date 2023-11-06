#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
대회에서 n명이 참가하면 [{(1,2),(3,4)} , {(5,6),(7,8)}] , [{(9,10),(11,12)} , {(13,14),(15,16)}]
*/
int solution(int n, int a, int b)
{
    int answer = 0;
    while(a != b){
        a = (a + 1) >> 1;
        b = (b + 1) >> 1;
        answer++;
    }
    return answer;
}