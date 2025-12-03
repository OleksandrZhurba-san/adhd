#include "binarySearch.h"

int binarySearch(int *array, int size, int target) {
  int *L = array;
  int *R = array + size - 1;

  while (L <= R) {
    int *middle = L + (R - L) / 2;
    if (*middle == target) {
      return (int)(middle - array);
    } else if (*middle < target) {
      // m = 4, target = 234, arr[*mid] = 798
      L = middle + 1;
    } else {
      R = middle - 1;
    }
  }

  return -1;
}

int *pBinarySearch(int *array, int size, int target) { return 0; }
