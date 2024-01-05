#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string a = "";
    
    for(int i = 1;i<food.size();i++){
        int repeat = food[i];
        for(int j = 0;j<repeat/2;j++){
            a += to_string(i);
        }
    }
    string b = a;
    a += "0";
    reverse(b.begin(),b.end());
    a += b;
    answer = a;
    return answer;
}