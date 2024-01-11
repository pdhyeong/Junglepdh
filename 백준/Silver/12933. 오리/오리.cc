#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> ducks;
int comp_max(int a,int b){
    if(a >= b) {
        return a;
    }
    else{
        return b;
    }
}
int main(){
    string s;

    cin >> s;

    int comp_size = 0;
    bool last_test = false;
    for(int i = 0;i<s.size();i++){
        char now_char = s[i];
        bool check = true;
        if(now_char == 'q'){
            ducks.push_back("q");
            check = false;
        }
        for(int j = 0;j<ducks.size();j++){
            if(ducks[j].size() == 1 && now_char == 'u'){
                ducks[j].push_back(now_char);
                check = false;
                break;
            }
            else if(ducks[j].size() == 2 && now_char == 'a'){
                ducks[j].push_back(now_char);
                check = false;
                break;
            }
            else if(ducks[j].size() == 3 && now_char == 'c'){
                ducks[j].push_back(now_char);
                check = false;
                break;
            }
            else if(ducks[j].size() == 4 && now_char == 'k'){
                ducks[j].push_back(now_char);
                check = false;
                break;
            }
        }
        if(check){
            last_test = true;
        }
        int now_size = ducks.size();
        for(int j = 0;j<now_size;j++){
            if(ducks[j] == "quack"){
                ducks.erase(ducks.begin()+j);
            }
        }
        comp_size = comp_max(ducks.size(),comp_size);
    }
    if(ducks.size()!=0 || last_test){
        cout << -1;
    }
    else{
        cout << comp_size;
    }
    return 0;
}