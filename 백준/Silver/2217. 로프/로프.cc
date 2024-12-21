#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n;
  vector<int> rope_list;
  cin >> n;
  for(int i =0;i<n;i++){
      int k;
      cin >> k;
      rope_list.push_back(k);
  }
  // ex 10 15 -> 10 + 10 = 20

  //ex 15 , 7 -> 15
  int maximum = 0;
  sort(rope_list.begin(),rope_list.end());
  for(int i = 0;i<rope_list.size();i++){
      int weight = rope_list[i] * (rope_list.size()-i);
      if(weight > maximum){
        maximum = weight;
      }
  }
  cout << maximum;
    return 0;
}