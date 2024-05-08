#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int n,m;
int arr[9];
void backtracking(int k){
    if(k == m){
        for(int i = 0;i<k;i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return ;
    }
    for(int i = 1;i<=n;i++){
        arr[k] = i;
        backtracking(k+1);
    }
}
int main(){
    cin >> n >> m;
    backtracking(0);
    return 0;
}