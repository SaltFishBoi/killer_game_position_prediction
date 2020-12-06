#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUFFLE_MAX 20
#define NUM_SUFFLE_MIN 10
#define UPPER 15
#define LOWER 0

int generate_randoms(int, int);

int main(int argc, char *argv[]){

  int i = 0;
  int rand1;
  int rand2;
  int array_length;
  int suffle_time;
  int rand_array[2 * NUM_SUFFLE_MAX + UPPER + 1];
  suffle_time = generate_randoms(NUM_SUFFLE_MIN, NUM_SUFFLE_MAX);
  array_length = 2 * suffle_time + UPPER + 1;

  /* construct array */
  while(i < array_length){
    rand_array[i] = generate_randoms(LOWER, UPPER);
    i++;
    printf("%d\n", rand1);
    rand_array[i] = generate_randoms(LOWER, UPPER);
    i++;
    printf("%d\n", rand2);
  }

  return(0);
}

int generate_randoms(int lower, int upper) {
  time_t rawtime;
  time(&rawtime);
  return ((rand() + rawtime) % (upper - lower + 1)) + lower;
}
