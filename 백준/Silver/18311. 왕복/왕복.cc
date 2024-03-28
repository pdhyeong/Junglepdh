#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int> vec;
    long long total = 0;
    int result = 0;
    vec.push_back(0);
    for(int i = 0;i<n;i++){
        int length;
        cin >> length;
        total += length;
        vec.push_back(total);
    }
    if(k == total){
        result = n;
    }
    else if(k > total){
        k = abs(k - total * 2);
        for(int i = 0;i<vec.size()-1;i++){
            if(vec[i] < k && k < vec[i+1]){
                result = i+1;
            }
            else if(k == vec[i]){
                result = i;
            }
        }
    }
    else {
        for(int i = 0;i<vec.size()-1;i++){
            if(vec[i] < k && k < vec[i+1]){
                result = i + 1;
            }
            else if(k == vec[i]){
                result = i + 1;
            }
        }
    }
    cout << result;
    return 0;
}