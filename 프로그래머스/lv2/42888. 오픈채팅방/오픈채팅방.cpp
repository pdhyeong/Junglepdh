#include <string>
#include <vector>
#include <sstream>
#include <map>
using namespace std;
vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;
 
    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }
 
    return answer;
}
vector<string> solution(vector<string> record) {
    // answer = []
    // idlist = {}
    // for st in record:
    //     sentence = st.split(" ")
    //     if sentence[0] != 'Leave':
    //         idlist[sentence[1]] = sentence[2]
    // for st in record:
    //     sentence = st.split(" ")
    //     if sentence[0] == "Enter":
    //         answer.append("{}님이 들어왔습니다.".format(idlist[sentence[1]]))
    //     elif sentence[0] == "Leave":
    //         answer.append("{}님이 나갔습니다.".format(idlist[sentence[1]]))
    // return answer
    vector<string> answer;
    map<string,string> idlist;
    for(int i = 0;i<record.size();i++){
        vector<string> sentence = split(record[i],' ');
        if (sentence[0] != "Leave")
            idlist[sentence[1]] = sentence[2];
    }
    for(int i = 0;i<record.size();i++){
        vector<string> sentence = split(record[i],' ');
        if (sentence[0] == "Enter")
            answer.push_back(idlist[sentence[1]]+"님이 들어왔습니다.");
        else if (sentence[0] == "Leave")
            answer.push_back(idlist[sentence[1]]+"님이 나갔습니다.");
    }
    return answer;
}