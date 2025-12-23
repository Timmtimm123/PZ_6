#include <iostream>
#include "dynarr.h"

int main() {
    try {
        DynArr arr(5);

        arr.set(0, 10);
        arr.set(1, -50);
        arr.set(2, 100);

        std::cout << arr.get(1) << std::endl;

        // arr.set(10, 5);     // out_of_range
        // arr.set(3, 200);    // invalid_argument
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    }

    return 0;
}
