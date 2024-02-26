#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    int num, length;
    cin >> num >> length;
    vector<int> length_list;
    for(int i = 0;i<num;i++){
        int t;
        cin >> t;
        length_list.push_back(t);
    }
    sort(length_list.begin(),length_list.end());
    for(int i = 0;i<length_list.size();i++){
        if(length_list[i] <= length){
            length++;
        }
    }
    cout << length << '\n';
    return 0;
}