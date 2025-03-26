#include <stddef.h>

void move_zeros(size_t len, int arr[len])
{
  size_t k = 0;
  for (size_t i = 0; i < len; i++) {
    if (arr[i] != 0) {
      int temp = arr[k];
      arr[k] = arr[i];
      arr[i] = temp;
      k++;
    }
  }
}
