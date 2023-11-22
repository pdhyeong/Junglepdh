#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    // 대각선 d, 높이 비율 h, 너비비율 w
    // 너비를 공백 한 칸을 이용해서 구분 지은 후 출력
    int d,h,w;
    cin >> d >> h >> w;
    double bit = pow(h,2) + pow(w,2);
    double ratio = d / sqrt(bit);
    cout << floor(h * ratio) << ' ' << floor(w * ratio);
    return 0;
}