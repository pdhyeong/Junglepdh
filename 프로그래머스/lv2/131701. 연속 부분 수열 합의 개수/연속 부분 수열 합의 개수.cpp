#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    vector<int> newvec;
    for(int i =0;i<2;i++){
        for(int j = 0;j<elements.size();j++){
            if(i == 1 && j == elements.size()-1){
                break;
            }
            newvec.push_back(elements[j]);
        }
    }
    set<int> sum;
    for(int i = 1;i<=elements.size();i++){
        for(int j = 0;j<elements.size();j++){
            int coresum = 0;
            for(int k = j;k<j+i;k++){
                coresum += newvec[k];
            }
            sum.insert(coresum);
        }
    }
    return sum.size();
}