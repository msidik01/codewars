#include <unordered_map>
#include <algorithm>
#include <string>
#include <limits>

using Ingredients = std::unordered_map<std::string, int>;

int cakes(const Ingredients& recipe, const Ingredients& available) {
  try{ 
    auto cakes = std::numeric_limits<int>::max();
    for (auto& [item, k] : recipe) {
      auto n = available.at(item);
      cakes = std::min(cakes, n / k);
    }
    return cakes;
  } catch(const std::exception& e) {
    return 0;
  }
}
