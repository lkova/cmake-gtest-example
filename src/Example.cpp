#include "Example.hpp"

int MAC(int x, int y, int &sum) {
    sum += x * y;
    return sum;
}

int Square(int x) {
    return x * x + 1;
}