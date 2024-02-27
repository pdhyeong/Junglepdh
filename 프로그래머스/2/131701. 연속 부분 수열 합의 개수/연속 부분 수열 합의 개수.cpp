#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

int solution(vector<int> elements) {
    vector<int> ele = elements;
    for(int i = 0;i<elements.size()-1;i++){
        ele.push_back(elements[i]);
    }
    unordered_map<int,int> mymap;
    for(int i = 0;i<elements.size();i++){
        int n = 0;
        for(int j = i;j<i+elements.size();j++){
            n += ele[j];
            mymap[n]++;
        }
    }
    return mymap.size();
}