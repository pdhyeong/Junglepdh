#include <string>
#include <vector>
#include <iostream>
using namespace std;
bool check(string k){
    for(int i = 0;i<k.size();i++){
        if(k[i] == '3'){
            return true;
        }
    }
    return false;
}
int solution(int n) {
    int k = 0;
    
    for(int i = 1;i<=n;i++){
        k++;
        while(k % 3 == 0 || check(to_string(k))){
            k++;
        }
    }
    return k;
}