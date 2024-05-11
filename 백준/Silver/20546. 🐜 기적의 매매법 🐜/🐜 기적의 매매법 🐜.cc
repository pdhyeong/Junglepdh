#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> chart;
int exam1(int coin){
    int low_count = 0;
    int high_count = 0;
    int total = 0;
    int answer = 0;
    for(int i = 1;i<chart.size();i++){
        if(chart[i] < chart[i-1]){
            low_count++;
            high_count = 0;
        }
        else if(chart[i] > chart[i-1]){
            high_count++;
            low_count = 0;
        }
        else{
            high_count = 0;
            low_count = 0;
        }
        if(low_count >= 3 && coin >= chart[i]){
            total += coin/chart[i];
            coin = coin % chart[i];
        }
        else if(high_count >= 3){
            coin += total * chart[i];
            total = 0;
            high_count = 0;
        }
        answer = total * chart[i] + coin;
    }
    return answer;
}
int exam2(int coin){
    int total = 0;
    int answer = 0;
    for(int i = 0;i<chart.size();i++){
        if(coin >= chart[i]){
            total += coin/chart[i];
            coin = coin % chart[i];
        }
        answer = total * chart[i] + coin;
    }
    return answer;
}
int main() {
    // 방법 1 모든 거래는 전량 매수와 전량 매도
    // 3일 연속 가격이 전일 대비 상승하는 주식은 다음날 무조건 가격이 하락한다고 가정한다.
    // 3일 연속 가격이 전일 대비 떨어지면 다음날 무조건 오른다는 마인드

    // 방법2 모든 거래가 살수있으면 사고 대기 탄다.

    int coin;
    cin >> coin;
    for(int i = 0;i<14;i++){
        int k;
        cin >> k;
        chart.push_back(k);
    }
    if(exam2(coin) > exam1(coin)){
        cout << "BNP";
    }
    else if(exam2(coin) < exam1(coin)){
        cout<< "TIMING";
    }
    else{
        cout << "SAMESAME";
    }
    return 0;
}