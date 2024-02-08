#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int arr[26]= {0,};
    string a,b;
    cin >> a;
    cin >> b;
    map<char,int> amap;
    map<char,int> bmap;

    for(int i = 0;i<a.size();i++){
        amap[a[i]]++;
    }
    for(int i = 0;i<b.size();i++){
        bmap[b[i]]++;
    }
    int adelete = 0;
    for(const auto &pair:amap){
        if(bmap.find(pair.first) == bmap.end()){
            adelete+= pair.second;
        }
        else{
            if(pair.second > bmap[pair.first]){
                adelete += pair.second - bmap[pair.first];
            }
        }
    }
    int bdelete = 0;
    for(const auto &pair:bmap){
        if(amap.find(pair.first) == amap.end()){
            bdelete+=pair.second;
        }
        else{
            if(pair.second > amap[pair.first]){
                bdelete += pair.second - amap[pair.first];
            }
        }
    }
    cout << adelete + bdelete; 
    return 0;
}