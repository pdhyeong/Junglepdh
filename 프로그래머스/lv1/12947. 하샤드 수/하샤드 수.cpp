#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int comp = x;
    int sum = 0;
    while(comp > 0){
        sum += comp % 10;
        comp /= 10;
    }
    return x % sum == 0 ? true : false;
}