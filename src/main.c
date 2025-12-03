#include "binarySearch.h"
#include "linearSearch.h"
#include <assert.h>
#include <stdio.h>

#define ARRAY_SIZE 10

int main() {
  int testArray[ARRAY_SIZE] = {2, 3, 4, 12, 13, 22, 23, 25, 26, 123};
  int target = 4;
  int bTarget = 22;

  int result = linearSearch(testArray, ARRAY_SIZE, target);
  int bResult = binarySearch(testArray, ARRAY_SIZE, bTarget);
  assert(testArray[result] == target);
  assert(testArray[bResult] == bTarget);
  printf("Target has been found, idx: array[%d] \n", bResult);
  printf("Value: %d \n", testArray[bResult]);
  /* printf("Found %d in test array\n", target);
  printf("%-20s : %d\n", "testArray[0]", testArray[0]);
  printf("%-20s : %d\n", "*(testArray + 0)", *(testArray + 0));
  printf("%-20s : %d\n", "*L", *L);
  printf("%-20s : %d\n", "*R", *R);
  printf("middle element pointer: %p\n", middle);
  printf("middle element: %d\n", *middle); */

  return 0;
}
