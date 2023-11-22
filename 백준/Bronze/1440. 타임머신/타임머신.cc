#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <set>
using namespace std;
vector<string> split(string input,char del){
    string temp;
    stringstream ss(input);
    vector<string> answer;
    while(getline(ss,temp,del)){
        answer.push_back(temp);
    }
    return answer;
}
int main(){
    string s;
    cin >> s;
    vector<string> result = split(s,':');
    vector<string> myset;
    string fir = result[0] + result[1] + result[2];
    string sec = result[0] + result[2] + result[1];
    string thi = result[1] + result[0] + result[2];
    string four = result[1] + result[2] + result[0];
    string five = result[2] + result[1] + result[0];
    string six = result[2] + result[0] + result[1];

    myset.push_back(fir);
    myset.push_back(sec);
    myset.push_back(thi);
    myset.push_back(four);
    myset.push_back(five);
    myset.push_back(six);
    int answer = 0;
    for(int i = 0;i<myset.size();i++){
        string hour = myset[i].substr(0,2);
        string min = myset[i].substr(2,2);
        string sec = myset[i].substr(4,2);
        if("00" < hour && "13" > hour && min >= "00" && min <= "59" && sec >= "00" && sec <= "59"){
            answer++;
        }
    }
    cout << answer;
    return 0;
}