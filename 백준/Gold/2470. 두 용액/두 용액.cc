#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<int> arr;
    cin >> n;
    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());

    int start = 0;
    int end = n-1;
    long long sum = 10000000001;
    vector<int> save(2);
    while(start < end){
        long long result = arr[start] + arr[end];
        if(sum > abs(result)){
            sum = abs(result);
            save[0] = arr[start];
            save[1] = arr[end];
        }
        if(result < 0){
            start++;
        }
        else if(result == 0){
            save[0] = arr[start];
            save[1] = arr[end];
            break;
        }
        else{
            end--;
        }
    }
    sort(save.begin(),save.end());
    cout << save[0] << ' ' << save[1];
    return 0;
}