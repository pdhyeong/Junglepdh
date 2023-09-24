#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string) {
    char tmp;
    for(int i = 0;i<my_string.size()/2;i++){
        tmp = my_string[i];
        my_string[i] = my_string[my_string.size()-i-1];
        my_string[my_string.size()-i-1] = tmp;
    }
    return my_string;
}