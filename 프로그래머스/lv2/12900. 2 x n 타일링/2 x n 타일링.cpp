#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int arr[60001] = {0,};
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= n; i++) {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1000000007;
    }
    return arr[n];
}