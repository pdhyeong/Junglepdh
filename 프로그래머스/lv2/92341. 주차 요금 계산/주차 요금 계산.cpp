#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string,int> mymap;
    map<string,int> totalmap;
    for(int i = 0;i<records.size();i++){
        int hour = stoi(records[i].substr(0,2));
        int minute = stoi(records[i].substr(3,3));
        string carnum = records[i].substr(6,5);
        string direction = records[i].substr(11,7);
        int time = 60 * hour + minute;
        if(direction == "IN"){
            mymap[carnum] = time;
        }
        else if(direction == "OUT"){
            int total_fee = time - mymap[carnum];
            totalmap[carnum] += total_fee;
            mymap.erase(carnum);
        }
    }
    int out_time = 23 * 60 + 59;
    for(auto it = mymap.begin();it != mymap.end();it++){
        totalmap[it->first] += out_time - it->second;
    }
    int basic_fee = fees[1];
    int cer_time = fees[0];
    float interval_time = fees[2];
    float interval_fee = fees[3];
    
    for(auto it = totalmap.begin();it != totalmap.end();it++){
        float ceil_cer = ceil((it->second - cer_time) / interval_time);
        if(cer_time < it->second){
            answer.push_back(basic_fee + ceil_cer * interval_fee);
        }
        else{
            answer.push_back(basic_fee);
        }
    }
    return answer;
}