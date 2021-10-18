//
// Created by stani on 13.10.2021.
//

#include "vector.h"
#include <fstream>

int main() {
//    double arr1[] = {3.45, 1.87, -3.12, 12.2685, -6.4};
//    const lab3::Vector y(5, arr1);
//    y.print(std::cout);
//
//    //TEST Constructors
//    lab3::Vector a;
//    std::ifstream inf(R"(C:\Users\stani\CLionProjects\vector\test_main\vector.txt)");
//    a.inputInit(inf);
//    inf.close();
//    a.print(std::cout);
//
//    const lab3::Vector a1(5.3);
//    a1.print(std::cout);
//
//    lab3::Vector a2(5.6321);
//    a2.print(std::cout);
//
//    double arr[] = {3.45, 1.5, -5.12, 9.235, -3.4};
//    lab3::Vector a3(4, arr);
//    std::ofstream outf("test.txt");
//    a3.print(outf);
//    outf.close();
//
//    std::cout << std::endl;
//    //TEST Getter
////    a1.setEl(0, 6.65);
//    std::cout << a1.getEl(0) << " " << a2.getEl(0) << " " << a3.getEl(3) << std::endl;
//    std::cout << std::endl;
//    //TEST arithmetic
//    lab3::Vector b1 = a3.sum(a2);
//    b1.print(std::cout); // b1 from new
//
//    lab3::Vector b2 = a2.sub(a3);
//    b2.print(std::cout); // b2 from new
//
//    //a2 * a3
//    lab3::Vector b3 = a2.mult(a3);
//    b3.print(std::cout);
//
//    double aNorm = a2.norm();
//    std::cout << std::setprecision(2) << std::fixed << aNorm << std::endl;
//
//    a2.setEl(1, 20);
//    a2.print(std::cout);
//    aNorm = a2.norm();
//    std::cout << std::setprecision(2) << std::fixed << aNorm << std::endl;
//
//    lab3::Vector a4;
////    a4.inputInit();
//    a4.print(std::cout);
//
//    const double *c;
//    c = a4.getVectArr();
//    for (int i = 0; i < lab3::Vector::SIZE; ++i) {
//        std::cout << std::setprecision(2) << std::fixed << *(c + i) << " ";
//        ++c;
//    }
    int choice;
    const char *err = "";
    lab3::Vector v;
    std::cout << "Initialize your main vector - a: " << std::endl;
    try {
        v.inputInit(std::cin);
    }
    catch (const std::invalid_argument &msg) {
        std::cout << msg.what();
    }
    std::cout << "This is your vector: " << std::endl;
    v.print(std::cout);
    std::cout << "Current size of your vector: " << v.getCurrSize() << std::endl;
    std::cout << "Now choose option:\n0. Exit test\t1. Arithmetic methods" << std::endl;
    do {
        std::cout << err << std::endl;
        err = "There is no such option, try again.";
        lab3::getInt(choice);
    } while((choice < 0) || (choice > 1));
    if (choice == 1) {
        lab3::Vector b;
        std::cout << "Let's initialize the additional vector - b for arithmetics: " << std::endl;
        try {
            b.inputInit(std::cin);
        }
        catch (const std::invalid_argument &msg) {
            std::cout << msg.what();
        }
        std::cout << "This is your additional vector - b : " << std::endl;
        b.print(std::cout);
        std::cout << "Now chose arithmetic method to test: " << std::endl;
        int indic2;
        int choice2;
        const char *err2 = "";
        do {
            std::cout << "0. Exit   1. Change a   2. Change b   3. a + b   4. a - b   5. a * b   6. Norm" << std::endl;
            do {
                std::cout << err2 << std::endl;
                err2 = "There is no such option, try again.";
                indic2 = lab3::getInt(choice2);
            } while (((choice2 < 0) || (choice2 > 6)) && indic2 != -1);
            lab3::Vector c;
            if (choice2 == 1) {
                int index;
                double elem;
                std::cout << "Enter (index, number) to change value by index: ";
                if (lab3::getNum(index) != -1 && lab3::getNum(elem) != -1) {
                    try {
                        v.setEl(index, elem);
                    }
                    catch (const std::invalid_argument &msg) {
                        std::cout << msg.what();
                    }
                    std::cout << "This is your refactored vector - a: " << std::endl;
                    v.print(std::cout);
                } else
                    return -1;
            } else if (choice2 == 2) {
                int index;
                double elem;
                std::cout << "Enter (index, number) to change value by index: ";
                if (lab3::getNum(index) != -1 && lab3::getNum(elem) != -1) {
                    try {
                        b.setEl(index, elem);
                    }
                    catch (const std::invalid_argument &msg) {
                        std::cout << msg.what();
                    }
                    std::cout << "This is your refactored vector - b: " << std::endl;
                    b.print(std::cout);
                } else
                    return -1;
            } else if (choice2 == 3) {
                try {
                    c = v.sum(b);
                }
                catch (const std::bad_alloc &msg) {
                    std::cout << msg.what() << std::endl;
                }
                std::cout << "This is the result-vector :" << std::endl;
                c.print(std::cout);
            } else if (choice2 == 4) {
                try {
                    c = v.sub(b);
                }
                catch (const std::bad_alloc &msg) {
                    std::cout << msg.what() << std::endl;
                }
                std::cout << "This is the result-vector :" << std::endl;
                c.print(std::cout);
            } else if (choice2 == 5) {
                try {
                    c = v.mult(b);
                }
                catch (const std::bad_alloc &msg) {
                    std::cout << msg.what() << std::endl;
                }
                std::cout << "This is the result-vector :" << std::endl;
                c.print(std::cout);
            } else if (choice2 == 6) {
                double norm = v.norm();
                std::cout << "This is the norm of your vector: " << norm << std::endl;
            }
        } while (choice2 != 0 && indic2 != -1);
    }
    return 0;
}