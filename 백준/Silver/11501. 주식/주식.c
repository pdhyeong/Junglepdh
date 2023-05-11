#include <stdio.h>
int compare(int a,int b){
  return a > b;
}
int main(void) {
  int test;
  scanf("%d",&test);
  int arr[1000001];
  for(int i = 0;i<test;i++){
    int n;
    int data;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
      scanf("%d",&data);
      arr[i] = data;
    }
    long long result = 0;
    long long max = 0;
    for(int i = n-1;i>=0;i--){
      if(compare(arr[i],max)){
        max = arr[i];
      }
      else{
        result += (max - arr[i]);
      }
    }
    printf("%ld\n",result);
  }
  return 0;
}