#include "mp_printing.h"
#include "mp_multiplying.h"

#include <iostream>

namespace mp {
    
    void print_two_integers(int a, int b) {
        std::cout << "print_two_integers: " << a << ", " << b << std::endl;
    }
    
    void print_product(int a, int b) {
        std::cout << "print_product: " << mp::multiply(a, b) << std::endl;
    }
}
