#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> my_set;
    for(int i = 0;i<numbers.size();i++){
        for(int j = 0;j<numbers.size();j++){
            if(i == j) continue;
            my_set.insert(numbers[i]+numbers[j]);
        }
    }
    for(auto it : my_set){
        answer.push_back(it);
    }
    return answer;
}