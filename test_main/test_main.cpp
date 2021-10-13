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
    std::cout << std::endl;
    //TEST Getter
    std::cout << a1.getEl(1) << " " << a2.getEl(0) << " " << a3.getEl(3) << std::endl;
    std::cout << std::endl;
    //TEST arithmetic
    lab3::Vector b1 = a3.sum(a2);
    b1.printVector(); // b1 from new

    lab3::Vector b2 = a2.sub(a3);
    b2.printVector(); // b2 from new

    //a2 * a3
    lab3::Vector b3 = a2.mult(a3);
    b3.printVector();

    double aNorm = a2.norm();
    std::cout << std::setprecision(2) << std::fixed << aNorm << std::endl;

    a2.setEl(1, 20);
    a2.printVector();
    aNorm = a2.norm();
    std::cout << std::setprecision(2) << std::fixed << aNorm << std::endl;

    lab3::Vector a4;
//    a4.inputInit();
    a4.printVector();

    const double *c;
    c = a4.getVectArr();
    for (int i = 0; i < a4.getSIZE(); ++i) {
        std::cout << std::setprecision(2) << std::fixed << *(c + i) << " ";
        ++c;
    }
    return 0;
}