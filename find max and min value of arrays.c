#include <stdio.h>

int finding_min_value(int array[], int size) {
  int min = array[0];

  for (int i = 1; i < size; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }

  return min;
}
int finding_max_value(int array[], int size) {
  int max = array[0];

  for (int i = 1; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }

  return max;
}
int main() {
  int array[9] = {5, 2, 7, 1, 9, 4, 3, 6, 8};

  int size = sizeof(array) / sizeof(array[0]);

  int min = finding_min_value(array, size);
  int max = finding_max_value(array, size);

  printf("Minimum element: %d\n", min);
  printf("Maximum element: %d\n", max);

  return 0;
}
