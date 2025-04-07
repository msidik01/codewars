double solution(double n) {  
    double x = n - (int)(n);
    double result = 0.0;
    if (x < 0.25) {
      result = (int)(n);
    } else if (x < 0.75) {
      result = (int)(n) + 0.5;
    } else {
      result = (int)(n) + 1;
    }
    return result;
}
