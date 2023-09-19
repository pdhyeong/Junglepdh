#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>
using namespace std;
vector<string> union_set(string str1){
    vector<string> uni_set;
    for(int i = 0;i<str1.size()-1;i++){
        string an = "";
        bool flag = false;
        for(int j = i;j < i + 2;j++){
            if(str1[j] >= 65 && str1[j] <= 90){
                an += str1[j] += 32;
            }
            else if(str1[j] >= 97 && str1[j] <= 122){
                    an += str1[j];
                }
            else{
                flag = true;
            }
        }
        if(flag){
            continue;
        }
        uni_set.push_back(an);
    }
    return uni_set;
}
vector<string> intersection(vector<string> st1,vector<string> st2){
    vector<string> an;
    map<string,int> mymap1;
    map<string,int> mymap2;
    for(int i = 0;i<st1.size();i++){
        if(mymap1.find(st1[i]) != mymap1.end()){
            mymap1[st1[i]]++;
        }else{
            mymap1[st1[i]] = 1;
        }
    }
    for(int i = 0;i<st2.size();i++){
        if(mymap2.find(st2[i]) != mymap2.end()){
            mymap2[st2[i]]++;
        }else{
            mymap2[st2[i]] = 1;
        }
    }
    for(auto it = mymap1.begin();it!=mymap1.end();it++){
        if(mymap2.find(it->first) != mymap2.end()){
            if(it->second <= mymap2[it->first]){
                for(int i = 0;i<it->second;i++){
                    an.push_back(it->first);
                }
            }
        }
        else{
            continue;
        }
    }
    for(auto it = mymap2.begin();it!=mymap2.end();it++){
        if(mymap1.find(it->first) != mymap1.end()){
            if(it->second < mymap1[it->first]){
                for(int i = 0;i<it->second;i++){
                    an.push_back(it->first);
                }
            }
        }
        else{
            continue;
        }
    }
    return an;
}

int multiset(int st1,int st2){
    return st1 + st2;
}

int solution(string str1, string str2) {
    int answer = 0;
    vector<string> st1 = union_set(str1);
    vector<string> st2 = union_set(str2);
    vector<string> an1 = intersection(st1,st2);
    double countlen = multiset(st1.size(),st2.size()) - an1.size();
    double an1size = an1.size();
    if(countlen == 0 && an1.size() == 0){
        return 65536;
    }
    answer = an1size/countlen*65536;
    return answer;
}