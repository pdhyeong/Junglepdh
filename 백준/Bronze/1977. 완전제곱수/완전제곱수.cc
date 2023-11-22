#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> vec;
    vec.push_back(0);
    for(int i = 1;i*i<=10000;i++){
        vec.push_back(i*i);
    }
    int sum = 0;
    int check = 0;
    int min = 0;
    for(int i = (int) sqrt(n);i<=(int) sqrt(m);i++){
        if(n <= vec[i]){
            if(check == 0){
                min = vec[i];
            }
            check++;
            sum += vec[i];
        }
    }

    if(sum != 0){
        cout << sum <<'\n';
        cout << min;
    }
    else cout << -1;
    return 0;
}