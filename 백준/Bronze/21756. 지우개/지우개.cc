#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >>n;
    if(n == 1){
        cout << 1;
        return 0;
    }
    if(n==2){
        cout << 2;
        return 0;
    }
    for(int i = 1;i<32;i++){
        if(n < (2 << i)){
            cout << (2<<(i-1)) << '\n';
            break;
        }
    }
    return 0;
}