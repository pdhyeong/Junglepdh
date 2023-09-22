#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>
using namespace std;
bool Prime_num(long long criteria){
    if(criteria < 2){
        return false;
    }
    for (long long i = 2; i <= (long long) sqrt(criteria); i++) {
        if (criteria % i == 0) {
            return false; 
        }
    }
    return true;
}
vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;
 
    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }
 
    return answer;
}
int solution(int n, int k) {
    int answer = 0;
    int temp = 0;
    vector<string> st;
    string one = "";
    while(n > 0){
        temp = n % k;
        n = n / k;
        one += to_string(temp);
    }
    reverse(one.begin(), one.end());
    vector<string> tmp = split(one,'0');
    for(int i = 0;i<tmp.size();i++){
        if(tmp[i] != ""){
            long long cm = stol(tmp[i]);
            if(Prime_num(cm)){
                answer++;
            }
        }
    }
    return answer;
}