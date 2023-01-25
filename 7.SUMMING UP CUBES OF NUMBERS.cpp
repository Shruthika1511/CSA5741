#include <stdio.h>

int main (){
  int n;
  int sum = 0;
  printf("ENTER LIMIT:");
  scanf("%d",&n);
  //calculating sum of cubes from 1 to n
  for(int i = 1; i <= n; i++)
    sum += i*i*i;

  printf("Sum is: %i\n", sum);
  return 0;
}
