#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
// 베열에 두 수를 곱한 값을 누적하여 더한다...?
// 누적된 값이 최소가 되도록 만들어야한다
int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(),A.end());
    sort(B.rbegin(),B.rend());
    for(int i = 0;i<A.size();i++){
        answer += A[i] * B[i];
    }
    return answer;
}