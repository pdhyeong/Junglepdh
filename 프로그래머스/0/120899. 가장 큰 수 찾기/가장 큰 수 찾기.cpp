#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int maxi = 0;
    int idx = 0;
    for(int i = 0;i<array.size();i++){
        if(maxi < array[i]){
            maxi = array[i];
            idx = i;
        }
    }
    answer.push_back(maxi);
    answer.push_back(idx);
    return answer;
}