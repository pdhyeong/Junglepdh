#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    map<string,int> dict;
    int num = 1;
    for(char i = 'A';i<='Z';i++){
        string a = "";
        a += i;
        dict[a] = num++;
    }
    string search = "";
    int max_size = 27;
    for (int i = 0; i < msg.length(); i++)
    {
        search += msg[i];
        if (dict.find(search) == dict.end())
        {
            dict[search] = max_size++;
            search = search.substr(0, search.length() - 1);
            answer.push_back(dict[search]);
            search = "";
            i--;
        }
    }
    answer.push_back(dict[search]);
    return answer;
}