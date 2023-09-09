#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    if(num == 1){
        return 0;
    }
    long long ds = num;
    while(ds != 1){
        if(answer == 500){
            return -1;
        }
        ds & 1 ? ds = (ds * 3) + 1 : ds = (ds / 2);
        answer++;
    }
    return answer;
}