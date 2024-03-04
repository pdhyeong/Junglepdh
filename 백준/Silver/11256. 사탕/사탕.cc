#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int apple,box;
        cin >> apple >> box;
        vector<int> box_data;
        for(int j = 0;j<box;j++){
            int row,col;
            cin >> row >> col;
            box_data.push_back(row * col);
        }
        sort(box_data.rbegin(),box_data.rend());
        int result = 0;
        for(int j = 0;j<box_data.size();j++){
            if(apple <= 0){
                break;
            }
            apple -= box_data[j];
            result++;
        }
        cout << result << '\n';
    }
    return 0;
}