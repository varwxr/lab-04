

#include <cstdint>
#include <iostream>

int main() {
    int maxNumber = 1;
    int maxSteps = 0;

    for (int start = 1; start <= 99; ++start) {
        int n = start;
        int steps = 0;

        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = 3 * n + 1;
            }

            steps = steps + 1;
        }

        if (steps > maxSteps) {
            maxSteps = steps;
            maxNumber = start;
        }
    }

    std::cout << maxNumber << ' ' << maxSteps << '\n';
}
