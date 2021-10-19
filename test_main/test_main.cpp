//
// Created by stani on 13.10.2021.
//

#include "vector.h"
#include <fstream>

int main() {
    // check overloaded
    lab3::Vector a;
    std::cin >> a;
    std::cout << a;

    std::cout << ++a;
    std::cout << a++;
    std::cout << a;
    a(1, 5.338);
    std::cout << a;

//    int choice;
//    const char *err = "";
//    lab3::Vector v;
//    std::cout << "Initialize your main vector - a: " << std::endl;
//    try {
//        v.inputInit(std::cin);
//    }
//    catch (const std::invalid_argument &msg) {
//        std::cout << msg.what();
//    }
//    std::cout << "This is your vector: " << std::endl;
//    v.print(std::cout);
//    std::cout << "Current size of your vector: " << v.getCurrSize() << std::endl;
//    std::cout << "Now choose option:\n0. Exit test\t1. Arithmetic methods" << std::endl;
//    do {
//        std::cout << err << std::endl;
//        err = "There is no such option, try again.";
//        lab3::getInt(choice);
//    } while((choice < 0) || (choice > 1));
//    if (choice == 1) {
//        lab3::Vector b;
//        std::cout << "Let's initialize the additional vector - b for arithmetics: " << std::endl;
//        try {
//            b.inputInit(std::cin);
//        }
//        catch (const std::invalid_argument &msg) {
//            std::cout << msg.what();
//        }
//        std::cout << "This is your additional vector - b : " << std::endl;
//        b.print(std::cout);
//        std::cout << "Now chose arithmetic method to test: " << std::endl;
//        int indic2;
//        int choice2;
//        const char *err2 = "";
//        do {
//            std::cout << "0. Exit   1. Change a   2. Change b   3. a + b   4. a - b   5. a * b   6. Norm" << std::endl;
//            do {
//                std::cout << err2 << std::endl;
//                err2 = "There is no such option, try again.";
//                indic2 = lab3::getInt(choice2);
//            } while (((choice2 < 0) || (choice2 > 6)) && indic2 != -1);
//            err2 = "";
//            lab3::Vector c;
//            if (choice2 == 1) {
//                int index;
//                double elem;
//                std::cout << "1. Change existing element   2. Put new element at the end" << std::endl;
//                int choice3, indic3;
//                const char *err3 = "";
//                do {
//                    std::cout << err3 << std::endl;
//                    err3 = "There is no such option, try again.";
//                    indic3 = lab3::getInt(choice3);
//                } while (((choice2 < 1) || (choice2 > 2)) && indic3 != -1);
//                if (choice3 == 1) {
//                    std::cout << "Enter (index, number) to change value by index: ";
//                    if (lab3::getNum(index) != -1 && lab3::getNum(elem) != -1) {
//                        try {
//                            v.setEl(index, elem);
//                        }
//                        catch (const std::invalid_argument &msg) {
//                            std::cout << msg.what();
//                        }
//                        std::cout << "This is your refactored vector - a: " << std::endl;
//                        v.print(std::cout);
//                    } else
//                        return -1;
//                }
//                else if (choice3 == 2) {
//                    double newEl;
//                    std::cout << "Enter new element: ";
//                    if (lab3::getNum(newEl) != -1) {
//                        try {
//                            v.put(newEl);
//                        }
//                        catch (const std::invalid_argument &msg) {
//                            std::cout << msg.what();
//                        }
//                        std::cout << "This is your refactored vector - a: " << std::endl;
//                        v.print(std::cout);
//                    }
//                    else
//                        return -1;
//                }
//            } else if (choice2 == 2) {
//                int index;
//                double elem;
//                std::cout << "1. Change existing element   2. Put new element at the end" << std::endl;
//                int choice3, indic3;
//                const char *err3 = "";
//                do {
//                    std::cout << err3 << std::endl;
//                    err3 = "There is no such option, try again.";
//                    indic3 = lab3::getInt(choice3);
//                } while (((choice2 < 1) || (choice2 > 2)) && indic3 != -1);
//                if (choice3 == 1) {
//                    std::cout << "Enter (index, number) to change value by index: ";
//                    if (lab3::getNum(index) != -1 && lab3::getNum(elem) != -1) {
//                        try {
//                            b.setEl(index, elem);
//                        }
//                        catch (const std::invalid_argument &msg) {
//                            std::cout << msg.what();
//                        }
//                        std::cout << "This is your refactored vector - b: " << std::endl;
//                        b.print(std::cout);
//                    } else
//                        return -1;
//                }
//                else if (choice3 == 2) {
//                    double newEl;
//                    std::cout << "Enter new element: ";
//                    if (lab3::getNum(newEl) != -1) {
//                        try {
//                            b.put(newEl);
//                        }
//                        catch (const std::invalid_argument &msg) {
//                            std::cout << msg.what();
//                        }
//                        std::cout << "This is your refactored vector - a: " << std::endl;
//                        b.print(std::cout);
//                    }
//                    else
//                        return -1;
//                }
//            } else if (choice2 == 3) {
//                try {
//                    c = v.sum(b);
//                }
//                catch (const std::bad_alloc &msg) {
//                    std::cout << msg.what() << std::endl;
//                }
//                std::cout << "This is the result-vector :" << std::endl;
//                c.print(std::cout);
//            } else if (choice2 == 4) {
//                try {
//                    c = v.sub(b);
//                }
//                catch (const std::bad_alloc &msg) {
//                    std::cout << msg.what() << std::endl;
//                }
//                std::cout << "This is the result-vector :" << std::endl;
//                c.print(std::cout);
//            } else if (choice2 == 5) {
//                try {
//                    c = v.mult(b);
//                }
//                catch (const std::bad_alloc &msg) {
//                    std::cout << msg.what() << std::endl;
//                }
//                std::cout << "This is the result-vector :" << std::endl;
//                c.print(std::cout);
//            } else if (choice2 == 6) {
//                double norm = v.norm();
//                std::cout << "This is the norm of your vector: " << norm << std::endl;
//            }
//            else
//                return 0;
//        } while (choice2 != 0 && indic2 != -1);
//    }
//    return 0;
}