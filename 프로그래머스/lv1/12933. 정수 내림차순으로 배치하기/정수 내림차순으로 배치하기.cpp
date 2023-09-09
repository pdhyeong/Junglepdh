#include <string>
#include <vector>
#include <algorithm>

bool comp(int a,int b){
    return a > b;
}
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    sort(s.begin(),s.end(),comp);
    return stol(s);
}