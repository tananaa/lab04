#include "solver.hpp"
#include <cmath>

std::pair<double, double> solve_quadratic(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    if (d < 0) return {0, 0};
    double sqrt_d = sqrt(d);
    return {(-b - sqrt_d) / (2 * a), (-b + sqrt_d) / (2 * a)};
}
