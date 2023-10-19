#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void check(int a,int b){
    if(a > b){
        swap(&a,&b);
    }
}
int main() {
    int n;
    vector<long long> arr;
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
    long long save[2] = {0,0};
    while(start < end){
        long long result = arr[start] + arr[end];
        if(sum > abs(result)){
            sum = abs(result);
            save[0] = arr[start];
            save[1] = arr[end];
            if(result == 0){
                break;
            }
        }
        if(result < 0){
            start++;
        }
        else{
            end--;
        }
    }
    check(save[0],save[1]);
    cout << save[0] << ' ' << save[1];
    return 0;
}