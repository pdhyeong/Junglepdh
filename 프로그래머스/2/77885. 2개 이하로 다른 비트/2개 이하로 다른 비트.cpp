#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef long long ll;

vector<ll> solution(vector<ll> numbers) {
    vector<ll> answer;
    for(ll& n : numbers) {
        answer.push_back(n + (~n & -~n) - ((~n & -~n) >> 1));
    }
    return answer;
}