#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n,l;
    cin >> n >> l;
    bool flag = false;
    for(int i = l;i<101;i++){
        int x = n - (i * (i + 1)/ 2);
        if(x % i == 0){
            x = x / i;

            if(x >= -1){
                for(int j = 1;j<i+1;j++){
                    cout << x + j << ' ';
                }
                flag = true;
                break;
            }
        }
    }
    if(!flag){
        cout << -1;
    }
    return 0;
}