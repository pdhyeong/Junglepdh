#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        map<char,int> mymap;
        for(int i = 0;i<s.size();i++){
            mymap[s[i]] = s[i];
        }
        int sum = 0;
        for(int i = 65;i<=90;i++){
            sum += i;
        }
        for(const auto & pair:mymap){
            sum -= pair.second;
        }
        cout << sum << '\n';
    }
    return 0;
}