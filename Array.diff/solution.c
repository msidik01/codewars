#include <stdlib.h>
#include <stdbool.h>

//  return a dynamically allocated array
//  assign the length of this array to *z
//  memory will be freed by the test suite

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) {
  int *result = malloc(n1 * sizeof(int));
  
  *z = 0;
  for (size_t i = 0; i < n1; i++) {
    bool is_exist = false;
    for (size_t j = 0; j < n2; j++) {
      if (arr2[j] == arr1[i]) {
        is_exist = true;
        break;
      }
    }

    if (!is_exist) {
      result[*z] = arr1[i];
      (*z)++;
    }
  }

  return result;
}
