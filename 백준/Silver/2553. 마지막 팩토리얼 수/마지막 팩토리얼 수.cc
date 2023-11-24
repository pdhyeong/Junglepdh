#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 1;

    for(int i = 1;i<=n;i++){
        ans *= i;
        ans %= 10000000;
        while(ans % 10 == 0){
            ans /= 10;
        }
    }
    cout << ans % 10 << '\n';
    return 0;
}