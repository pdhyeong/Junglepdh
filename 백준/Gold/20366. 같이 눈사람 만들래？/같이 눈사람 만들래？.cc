#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(),vec.end());
    int answer = 1e9;
    for(int i = 0;i<n-3;i++){
        for(int j = i + 3;j < n;j++){
            int left = i + 1;
            int right = j - 1;
            while(left < right){
                int anna = vec[i] + vec[j];
                int elsa = vec[left] + vec[right];

                int result = elsa - anna;
                answer = min(answer,abs(result));
                if(result > 0){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
    }
    cout << answer;
    return 0;
}