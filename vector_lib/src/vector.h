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
        static const int SIZE = 20;
    private:
        double vectorArr[SIZE]{};
        int currSize;
    public:
        // friends
        friend std::ostream &operator<<(std::ostream &s, const Vector &v);
        friend std::istream &operator>>(std::istream &is, Vector &v);
        // constructors
        Vector() : currSize(0) {};
        explicit Vector(double element) : currSize(1), vectorArr{double(element)} {};

        Vector(int size, double elmArr[]);
        void put(double elem);

        // getters
        double getEl(int index) const;
        [[nodiscard]] const double *getVectArr() const { return this->vectorArr; }
        [[nodiscard]] int getCurrSize() const { return currSize; }

        // setters
        Vector &setEl(int index, double elem);

        // arithmetic methods
        [[nodiscard]] Vector sum(const Vector &b) const;
        [[nodiscard]] Vector sub(const Vector &b) const;
        [[nodiscard]] Vector mult(const Vector &b) const;
        [[nodiscard]] double norm() const;

        // additional
        std::istream &inputInit(std::istream &s);
        std::ostream &print(std::ostream &s) const;

        // overloaded operators
        Vector &operator-();
        Vector &operator+=(const Vector &b);
        double& operator[](std::size_t index) { return vectorArr[index]; }
        double operator[](std::size_t index) const { return vectorArr[index]; }
        const Vector &operator++();
        Vector operator++(int);
        Vector &operator()(int index, double element);
        Vector operator+(const Vector &b);
        Vector operator-(const Vector &b);
        Vector operator*(const Vector &b);
    };

    // optional non-members
    bool approximatelyEqual(double a, double b, double epsilon);
    bool definitelyGreaterThan(double a, double b, double epsilon);
    int getInt(int &a);

    template<class T>
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
            } else {
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

/*TODO перегрузить:
 * В части В - операция присваивания обязательно - копирующая и перемещающая
 * переделать на динамическую
 * копирующий перемещающий конструктор
 * присваивание в тестах
 * */
