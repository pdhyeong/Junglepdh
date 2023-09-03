#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    map<int,int> left_m;
    map<int,int> right_m;
    
    for(int i=0; i<topping.size(); i++) {
        if(right_m.find(topping[i])!=right_m.end()) 
            right_m[topping[i]]++; 
        else 
            right_m.insert({topping[i],1}); 
    }
    
    for(int i=0; i<topping.size(); i++) {
        if(right_m.find(topping[i])!=right_m.end()) {
            right_m[topping[i]]--;
            if(right_m[topping[i]]==0) 
                right_m.erase(topping[i]); 
            if(left_m.find(topping[i])==left_m.end())
                left_m.insert({topping[i],1}); 
            else
                left_m[topping[i]]++;
        }
        if(left_m.size()==right_m.size()) 
            answer++;
    }
    
    return answer;
}