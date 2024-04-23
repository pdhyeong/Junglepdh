#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
using namespace std;

// k= 4 인경우 4개의 접시를 먹을거다.
// 가능한 더욱 많은 종류를 먹을 것이다.
// 쿠폰을 증정해서 공짜로 먹을수있다.
int check[30001];
int max_Value(int a,int b){
    if(a > b){
        return a;
    }
    return b;
}
int main() {
    // 접시 수,초밥 가지수, 연속해서 먹는 접시수 ,쿠폰 번호
    int n,d,k,c;
    vector<int> dish;
    cin >> n >> d >> k >> c;
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        dish.push_back(a);
    }
    int answer = 0;
    int coupon = 0;
    int flag = 0;
    for(int i = 0;i<dish.size();i++){
        flag = 0;
        coupon = 1;
        for(int j = i;j < k + i;j++){
            if(check[dish[j%n]] == 1){
                //중복 갯수 체크
                flag++;
            }
            else check[dish[j%n]] = 1;
        }
        if(check[c] == 1) coupon = 0;
        answer = max(answer,k-flag+coupon);
        memset(check,0,sizeof(check));
    }
    cout << answer;
    return 0;
}