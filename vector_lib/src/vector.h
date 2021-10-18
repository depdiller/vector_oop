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
    public:
        // по-другому размер не работает в private
        static const int SIZE = 20;
    private:
        // const size of array
        double vectorArr[SIZE];
        int currSize;
    public:
        // constructors
        Vector() : currSize(0) {};
        Vector(double element) : currSize(1), vectorArr{double(element)} {};
        Vector(int size, double elemArr[]);
        void put(double elem);

        // getters
        [[nodiscard]] double getEl(int index) const;
        [[nodiscard]] const double *getVectArr() const { return this->vectorArr; }

        int getCurrSize() const { return currSize; }

        // setters
        Vector &setEl(int index, double elem);
        // arithmetic methods
        Vector& sum(Vector b) const;
        Vector& sub(Vector b) const;
        Vector& mult(Vector b) const;
        double norm();

        // additional
        // inputInit format = line with numbers, separated by
        void inputInit(std::istream &s);
        void print(std::ostream &s) const;
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
}/*TODO:
 * 1. Проверить на утечки нынешние арифметические методы, если че, переделать на указатели
 * 2. переделать метод с чтением из потока
 * 3. переделать взаимодействия с размерами вектора
 * 4. конструкторы должны уметь работать с константными объектами
 * 5. подправить getNum, чтобы адекватно работала и не вылетала + чтобы полноценно заменить
 * ей getInt, а то код грязный
 * 6. убрать размер из private области класса */

#endif //VECTOR_VECTOR_H
