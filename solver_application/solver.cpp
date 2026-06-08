#include "formatter_ex.hpp"
#include "solver.hpp"
#include <iostream>

int main() {
    auto roots = solve_quadratic(1, -3, 2);
    std::cout << formatter_ex("Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second)) << std::endl;
    return 0;
}
