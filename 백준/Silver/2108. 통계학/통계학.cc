#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    vector<int> vec;
    int arr[8001] = {0,};
    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        vec.push_back(k);
        arr[k + 4000] += 1;
        sum += k;
    }
    sort(vec.begin(),vec.end());
    int mx = *max_element(vec.begin(),vec.end());
    int mn = *min_element(vec.begin(),vec.end());
    if(round(sum/n) == -0){
        cout << 0 << '\n';
    }
    else{
        cout << round(sum/n) << '\n';
    }
    cout << vec[n/2] << '\n';
    int mx_count = 0;
    int count = 0;
    int result = 0;
    for(int i = 0;i<=8000;i++){
        mx_count = max(mx_count,arr[i]);
    }
    for(int i = 0;i<=8000;i++){
        if(mx_count == arr[i]){
            count++;
            if(count > 1){
                result = i - 4000;
                break;
            }
            result = i - 4000;
        }
    }
    cout << result << '\n';
    cout << mx - mn << '\n';
    return 0;
}