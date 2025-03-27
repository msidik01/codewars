#include <string>

const std::string HEX = "0123456789ABCDEF";
const size_t H = 16;
  
int clamp(int n) {
  return std::max(0, std::min(n, 255));
}

std::string to_hex(int dec) {
  std::string hex = "";
  for (size_t i = 0; i < 2; i++) {
    hex = HEX[dec%H] + hex;
    dec /= H;
  }
  return hex;
}
std::string rgb_to_hex(int r, int g, int b)
{
    auto r_hex = to_hex(clamp(r));
    auto g_hex = to_hex(clamp(g));
    auto b_hex = to_hex(clamp(b));
    return r_hex + g_hex + b_hex;
}
