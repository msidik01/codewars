int sum_of_digits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int digital_root(int n) {
  int sum = sum_of_digits(n);
  if (sum < 10) return sum;
  return digital_root(sum);
}
