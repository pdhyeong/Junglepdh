#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >>n;
    while(n--){
        int a,b;
        cin >> a >> b;
        int answer = 0;

        b = b % 4 ? b % 4 : 4;
        answer = (int) pow(a,b) % 10 ? (int) pow(a,b) % 10 : 10;
        cout << answer << '\n';
    }
    return 0;
}