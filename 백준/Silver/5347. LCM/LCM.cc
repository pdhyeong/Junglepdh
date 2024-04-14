#include <iostream>
#include <string>
#include <vector>

using namespace std;
int GCD(int a,int b){
    int temp,n;
    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }
    while(b != 0){
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}
long long LCM(int n,int m){
    return m * (n / (long long)GCD(n,m));
}
int main() {
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n,m;
        cin >> n >> m;
        if(n == 0 && m == 0){
            cout << 0 << '\n';
            continue;
        }
        cout << LCM(n,m) << '\n';
    }
    return 0;
}