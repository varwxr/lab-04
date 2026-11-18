#include <cstdint>
#include <iostream>

int main() {
    unsigned i = 10;

    while (true) {
        std::cout << i << ' ';

        if (i == 0) {
            break;
        }

        --i;
    }

    std::cout << '\n';
}