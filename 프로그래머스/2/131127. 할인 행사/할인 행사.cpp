#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    unordered_map<string,int> mymap;
    unordered_map<string,int> mymap2;
    
    for(int i = 0;i<want.size();i++){
        mymap[want[i]] = number[i];
    }
    for(int i = 0;i<discount.size()-9;i++){
        mymap2 = mymap;
        bool flag = false;
        for(int j = i;j<i+10;j++){
            mymap2[discount[j]]--;
        }
        for(auto &pair:mymap2){
            if(pair.second != 0){
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