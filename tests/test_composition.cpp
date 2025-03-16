// C/C++
#include <iostream>

// elements
#include <elements/compound.hpp>

int main() {
  std::string formula = "C6H12O6";

  elements::Composition result = elements::get_composition(formula);

  std::cout << "Parsed Elements:\n";
  for (const auto& [element, count] : result) {
    std::cout << element << ": " << count << '\n';
  }

  double weight = elements::get_compound_weight(result);
  std::cout << "Molecular Weight: " << weight << '\n';

  return 0;
}
