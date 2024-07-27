#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    reverse(num_list.begin(),num_list.end());
    return num_list;
}