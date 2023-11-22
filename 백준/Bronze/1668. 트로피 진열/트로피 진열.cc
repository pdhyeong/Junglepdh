#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
vector<int> vec;
int main(){
    int n;
    cin >> n;

    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        vec.push_back(k);
    }
    int a = 0;
    int lcount = 0;
    for(int i = 0;i<vec.size();i++){
        if(vec[i] > a){
            a = vec[i];
            lcount++;
        }
    }
    int b = 0;
    int rcount = 0;
    for(int i = vec.size()-1;i>=0;i--){
        if(vec[i] > b){
            b = vec[i];
            rcount++;
        }
    }
    cout << lcount << '\n';
    cout << rcount;
    return 0;
}