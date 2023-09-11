#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int divider = 1;
    while (divider <= n)
    {
        if (0 == n % divider) 
        {
            ++answer;
        }
        divider += 2;
    }
    return answer;
}