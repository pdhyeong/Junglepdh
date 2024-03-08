#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main (){
    int length;
    cin >> length;
    int lamp;
    cin >> lamp;

    vector<int> street;
    for(int i = 0;i<lamp;i++){
        int k;
        cin >> k;
        street.push_back(k);
    }
    int subtract = street[0];
    int street_sub = 0;
    for(int i = 1;i<street.size();i++){
        if(street_sub < street[i] - street[i-1]){
            street_sub = street[i] - street[i-1];
        }
    }
    // 배열내부 끼리 길이 차이
    int cert = (street_sub+1)/2;
    int fir = street[0] - 0;
    int last = length - street[street.size()-1];
    cout << max(max(cert,fir),last) << '\n';
    return 0;
}