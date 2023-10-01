#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int d[100001] = {};

int main() {
  int n;
  cin >> n;
  int arr[100001] = {};
  for(int i = 0;i<n;i++){
    cin >> arr[i];
    d[i] = arr[i];
  }
  int rm = arr[0];
  for(int i = 1;i<n;i++){
    d[i] = max(d[i],d[i-1] + arr[i]);
    if(d[i] > rm){
      rm = d[i];
    }
  }
  cout << rm << '\n';
  return 0;
}