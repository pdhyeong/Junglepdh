#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int result = 0;
    for(int i = 0 ;i<n;i++){
        string s;
        cin >> s;
        vector<char> vec;
        for(int i = 0;i<s.size();i++){
            vec.push_back(s[i]);
            while(vec.size() > 1 && (vec[vec.size()-1] == vec[vec.size()-2])){
                vec.pop_back();
                vec.pop_back();
            }
        }
        if(vec.size() == 0){
            result++;
        }
    }
    cout << result;
    return 0;
}