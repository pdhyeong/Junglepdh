#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int check_value(string find_string){
    int check;
    if(find_string == "code"){
        check = 0;
    }
    else if(find_string == "date"){
        check = 1;
    }
    else if(find_string == "maximum"){
        check = 2;
    }
    else if(find_string == "remain"){
        check = 3;
    }
    return check;
}
vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    int check = check_value(ext);
    int comp_cert = check_value(sort_by);
    for(int i = 0;i<data.size();i++){
        if(data[i][check] < val_ext){
            answer.push_back(data[i]);
        }
    }
    sort(answer.begin(),answer.end(),[&](vector<int> a,vector<int> b) {
        return a[comp_cert] < b[comp_cert];
    });
    return answer;
}