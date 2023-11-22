#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n ;
    cin >>n;
    vector<int> arr(10,0);
    while(n > 0){
        int k = n % 10;
        n /= 10;
        arr[k] += 1;
    }
    int sub = 0;
    int six_nine = 0;
    int nine = 0;
    for(int i = 0;i<arr.size();i++){
        if(i != 6 && i != 9){
            sub = max(sub,arr[i]);
        }
        else{
            six_nine += arr[i];
        }
    }
    cout << max(sub,(six_nine+1)/2);
    return 0;
}