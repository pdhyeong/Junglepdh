#include <stdio.h>

int main(void) {
  int n;
  scanf("%d",&n);
  int a,b;
  while(n--){
    int mul = 1;
		scanf("%d %d",&a,&b);
		b=!(b%4)?4:b%4;
		while (b--)mul *= a;
		printf("%d\n",mul%10?mul%10:10);
  }
}