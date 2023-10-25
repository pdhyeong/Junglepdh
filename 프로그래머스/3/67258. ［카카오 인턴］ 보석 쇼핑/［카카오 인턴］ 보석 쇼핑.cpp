#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> gems) {
    vector<int> answer;
    unordered_map<string,int> gmap;
    int head = 0;
    int end = 0;
    int headMin = 0;
    int endMin = 0;
    for(int i = 0;i<gems.size();i++){
        gmap[gems[i]]++;
        if(gmap[gems[i]] == 1){
            end = i;
            headMin = head;
            endMin = end;
        }
        else{
            end = i;
            for(int j = head;j<i;j++){
                if(gmap[gems[j]] > 1){
                    gmap[gems[j]]--;
                }
                else{
                    head = j;
                    if(end - head < endMin - headMin){
                        endMin = end;
                        headMin = head;
                    }
                    break;
                }
            }
        }
    }
    answer.push_back(headMin+1);
    answer.push_back(endMin+1);
    return answer;
}