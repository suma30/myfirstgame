#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int g, ng = 1;

  srand(time(0));
  int number = rand() % 100 + 1;

  printf("Guess a number between 1 and 100 only\n");
  do {
    scanf("%d", &g);
    if (g > number)
      printf("lower your number please \n");
    else if (g < number)
      printf("increase your number please \n");
    else
      printf("yayy you got the number in %d attempts", ng);
    ng++;

  } while (g != number);
  return 0;
}