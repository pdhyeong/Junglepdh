#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    unordered_map<string,int> mymap;
    int num = 0;
    for(int i = 0;i<want.size();i++){
        mymap[want[i]] = number[i];
        num += number[i];
    }
    for(int i = 0;i<discount.size()-9;i++){
        unordered_map<string,int> comp_map = mymap;
        bool flag = false;
        for(int j = i;j<i+10;j++){
            if(comp_map.find(discount[j]) != comp_map.end()){
                comp_map[discount[j]]--;
                if(comp_map[discount[j]] < 0){
                    flag = true;
                    break;
                }
            }
            else{
                flag = true;
                break;
            }
        }
        if(!flag){
            answer++;
        }
    }
    return answer;
}