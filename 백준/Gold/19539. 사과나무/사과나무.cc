#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n,c3,c2;
    cin >> n;
    c3 = c2 = 0;
    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        c2 += k / 2;
        c3 += k;
    }
    if(c3 % 3 != 0){
        cout << "NO\n";
    }
    else {
        c3 = c3 / 3;
        if(c2 >= c3) {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}