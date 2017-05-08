#include <stdio.h>
void loop (int);
int testInt = 666;

int main() {
  printf("the testInt value is %d\n", testInt);
  loop(6);
  return 0;
}

void loop (int x){

for (int i = 0; i < x; i++) {
printf("hello for the %d time\n", i);
}

}
