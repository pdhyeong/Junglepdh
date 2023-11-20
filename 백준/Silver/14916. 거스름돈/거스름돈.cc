#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    int n;
    cin >> n;
    int answer = 0;

    while(n > 0){
        if(n % 5 == 0){
            answer += n / 5;
            n = 0;
            break;
        }
        n -= 2;
        answer++;
    }
    if(n < 0){
        cout << -1 << '\n';
    }
    else cout << answer << '\n';
    return 0;
}