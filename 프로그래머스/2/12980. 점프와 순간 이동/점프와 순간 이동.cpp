#include <iostream>
using namespace std;
int memo[1001];
int recur(int n,int cn){
    if(n == 0){
        return cn;
    }
    if(n % 2 == 0){
        return recur(n / 2,cn);
    }
    return recur(n-1,cn+1);
}
int solution(int n)
{
    int ans = recur(n,0);
    return ans;
}