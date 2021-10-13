//
// Created by stani on 13.10.2021.
//

#include "vector.h"

int main() {
    //TEST Constructors
    lab3::Vector a1;
    a1.printVector();

    lab3::Vector a2(5.6321);
    a2.printVector();

    double arr[] = {3.45, 1.5, -5.12, 9.235, -3.4};
    lab3::Vector a3(4, arr);
    a3.printVector();

    //TEST Getter
    std::cout << a1.getEl(1) << " " << a2.getEl(0) << " " << a3.getEl(3) << std::endl;

    //TEST arithmetic
    a3.sum(a2);
    a3.printVector();

    a3.sub(a2);
    a3.printVector();

    a2.mult(a3);
    a2.printVector();

    double aNorm = a2.norm();
    std::cout << std::setprecision(2) << std::fixed << aNorm << std::endl;

    a2.setEl(1, 20);
    a2.printVector();
    aNorm = a2.norm();
    std::cout << std::setprecision(2) << std::fixed << aNorm << std::endl;
    return 0;
}