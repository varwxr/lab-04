#include <cstdint>
#include <iostream>

bool every_third() {
    static int calls = 0;
    calls = calls + 1;
    return calls % 3 == 0;
}

int main() {
    for (int i = 0; i < 7; ++i) {
        std::cout << every_third() << ' ';
    }

    std::cout << '\n';
}