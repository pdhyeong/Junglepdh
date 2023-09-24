#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    for(int i = 1;i<1000;i++){
        if((i * slice)/ n >= 1){
            return i;
        }
    }
    return answer;
}