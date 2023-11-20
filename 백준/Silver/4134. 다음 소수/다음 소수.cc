#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
bool isPrimeNumber(long long x) {
    if(x == 1 || x == 0){
        return false;
    }
    for (int i = 2; i <= (int) sqrt(x); i++) {
        if (x % i == 0) {
            return false; 
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        long long k;
        long long answer = 0;
        cin >> k;
        while(1){
            if(isPrimeNumber(k)){
                cout << k << '\n';
                break;
            }
            k++;
        }
    }
    return 0;
}