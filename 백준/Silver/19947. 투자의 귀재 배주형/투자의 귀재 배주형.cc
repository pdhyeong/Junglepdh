#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int arr[100001];
int main(){
    int n, m;
    cin >> n >> m;
    double rate;
    
    int f = 5;
    int t = 3;
    int o = 1;
    arr[0] = n;
    for(int i = 1;i<=m;i++){
        if(i >= f){
            arr[i] = max(max((int)arr[i-f]*1.35,(int)arr[i-t]*1.2),(int)arr[i-o]*1.05);
        }
        else if(i >= t){
            arr[i] = max((int)arr[i-t]*1.2,(int)arr[i-o]*1.05);
        }
        else{
            arr[i] = (int)arr[i-o]*1.05;
        }
    }
    cout << arr[m];
    return 0;
}