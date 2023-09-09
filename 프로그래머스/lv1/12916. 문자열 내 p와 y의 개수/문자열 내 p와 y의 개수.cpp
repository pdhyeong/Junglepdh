#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int an1 = 0;
    int an2 = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == 'p' || s[i] == 'P'){
            an1++;
        }
        else if(s[i] == 'y' || s[i] == 'Y'){
            an2++;
        }
    }
    return an1 == an2 ? true:false;
}