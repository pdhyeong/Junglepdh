#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> gems) {
    vector<int> answer(2,0);
    unordered_map<string,int> gmap;
    int start = 0;
    int end = 0;
    int comp_start = 0;
    int comp_end = 0;
    for(int i = 0;i<gems.size();i++){
        gmap[gems[i]]++;
        end = i;
        if(gmap[gems[i]] == 1){
            comp_start = start;
            comp_end = end;
        }
        else{
            for(int j = start ; j < i;j++){
                if(gmap[gems[j]] > 1){
                    gmap[gems[j]]--;
                }
                else{
                    start = j;
                    if(end - start < comp_end - comp_start){
                        comp_end = end;
                        comp_start = start;
                    }
                    break;
                }
            }
        }
    }
    answer[0] = comp_start + 1;
    answer[1] = comp_end + 1;
    return answer;
}