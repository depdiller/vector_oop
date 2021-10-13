//
// Created by stani on 13.10.2021.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

namespace lab3 {
    const double epsilon = 0.01;

    class Vector {
    private:
        // const size of array
        static const int SIZE = 20;
        double vectorArr[SIZE];
        int countElm;
    public:
        // constructors
        Vector();
        Vector(double element);
        Vector(int size, double elemArr[]);

        // getters
        double getEl(int index) const;
        const double *getVectArr() const;
        int getSIZE() const { return SIZE; }
        int getCountElm() const { return countElm; }

        // setters
        Vector& setEl(int index, double elem);

        // arithmetic methods
        Vector& sum(Vector b);
        Vector& sub(Vector b);
        Vector& mult(Vector b);
        double norm();
        void put(double elem);

        // additional
        void printVector() const;
        void inputInit();
    };

    bool approximatelyEqual(double a, double b, double epsilon);

    bool definitelyGreaterThan(double a, double b, double epsilon);

    int getInt(int &a);

    template <class T>
    int getNum(T &a, int option = 1) { // option 1 = all numbers, option 0 = non zeros
        int indic;
        do {
            std::cin >> a;
            indic = 1;
            if (std::cin.eof())
                indic = -1;
            else if (option == 1) {
                if (!std::cin.good()) {
                    std::cout << "Incorrect input. Try again" << std::endl;
                    indic = 0;
                    std::cin.clear();
                    std::cin.ignore(INT_MAX, '\n');
                }
            }
            else {
                if (!std::cin.good() || a < 0) {
                    std::cout << "Incorrect input. Try again" << std::endl;
                    indic = 0;
                    std::cin.clear();
                    std::cin.ignore(INT_MAX, '\n');
                }
            }
        } while (indic == 0);
        return indic < 0 ? -1 : 1;
    }
}

#endif //VECTOR_VECTOR_H
