#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool comp(string a,string b){
    return (a + a + a) > (b + b + b);
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> vec;
    for(int i = 0;i<numbers.size();i++){
        vec.push_back(to_string(numbers[i]));
    }
    sort(vec.begin(),vec.end(),comp);
    for(int i = 0;i<vec.size();i++){
        answer+=vec[i];
    }
    if(answer[0] == '0'){
        return "0";
    }
    return answer;
}