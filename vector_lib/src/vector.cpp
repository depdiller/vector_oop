//
// Created by stani on 13.10.2021.
//
#include "vector.h"

namespace lab3 {
    Vector::Vector() {
        countElm = 0;
        for(int i = 0; i < SIZE; ++i) {
            vectorArr[i] = 0;
        }
    }

    Vector::Vector(double element) {
        countElm = 1;
        vectorArr[0] = element;
        for (int i = 1; i < SIZE; ++i)
            vectorArr[i] = 0;
    }

    Vector::Vector(int size, double elmArr[]) {
        // типа размер вектора ограничивает добавление новых
        // и никак не связан с размером elmArr
        // или size можно отрезать от массива элементы
        if (size > SIZE)
            throw std::invalid_argument("exceeded_size");
        countElm = size;
        int i;
        for (i = 0; i < size; ++i) {
            vectorArr[i] = *elmArr;
            ++elmArr;
        }
        for (; i < SIZE; ++i)
            vectorArr[i] = 0;
    }

    double Vector::getEl(int index) const {
        // index from 0 to n
        if (index >= SIZE)
            throw std::invalid_argument("exceeded_size");
        return vectorArr[index];
    }

    const double *Vector::getVectArr() const {
        return vectorArr;
    }

    Vector &Vector::setEl(int index, double elem) {
        if (index >= SIZE)
            throw std::invalid_argument("exceeded_size");
        vectorArr[index] = elem;
        if (index >= countElm)
            ++countElm;
        return *this;
    }

    void Vector::inputInit() {
        int choice;
        const char *err = "";
        int index;
        double numb;
        do {
            std::cout << err;
            err = "There is no such command";
            std::cout << "\n\t//OPTION MENU//\nChoose option: 0.Exit\t1. Add" << std::endl;
            getInt(choice);
            if (choice == -1)
                choice = 0;
            else if (choice == 1) {
                std::cout << "Enter new element if this format: (index, number) -> ";
                if (getInt(index) != -1 && getNum(numb) != -1) {
                    if (countElm == SIZE)
                        throw std::invalid_argument("exceeded_size");
                    this->setEl(index, numb);
                    std::cout << "success" << std::endl;
                    ++countElm;
                } else
                    throw std::invalid_argument("entered eof during reading");
                err = "";
            }
        } while(choice < 0 || choice == 1);
    }

    Vector& Vector::sum(Vector b) {
        Vector* c = new Vector;
        for (int i = 0; i < SIZE; ++i) {
            c->vectorArr[i] = vectorArr[i] + b.vectorArr[i];
        }
        c->countElm = this->countElm > b.countElm ? this->countElm : b.countElm;
        return *c;
    }

    Vector& Vector::sub(Vector b) {
        Vector* c = new Vector;
        for (int i = 0; i < SIZE; ++i) {
            c->vectorArr[i] = vectorArr[i] - b.vectorArr[i];
        }
        c->countElm = this->countElm > b.countElm ? this->countElm : b.countElm;
        return *c;
    }

    Vector& Vector::mult(Vector b) {
        Vector* c = new Vector;
        for (int i = 0; i < SIZE; ++i) {
            c->vectorArr[i] = vectorArr[i] * b.vectorArr[i];
        }
        c->countElm = this->countElm > b.countElm ? this->countElm : b.countElm;
        return *c;
    }

    double Vector::norm() {
        double max = 0;
        for (int i = 0; i < countElm; ++i) {
            if (lab3::definitelyGreaterThan(vectorArr[i], max, epsilon))
                max = vectorArr[i];
        }
        return max;
    }

    void Vector::put(double elem) {
        if (countElm == SIZE)
            throw std::invalid_argument("exceeded_size");
        vectorArr[countElm] = elem;
    }

    bool approximatelyEqual(double a, double b, double epsilon) {
        return fabs(a - b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
    }

    bool definitelyGreaterThan(double a, double b, double epsilon) {
        return (a - b) > ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
    }

    void Vector::printVector() const {
        std::cout << "{";
        for (int i = 0; i < SIZE; ++i) {
            if (i == SIZE - 1)
                std::cout << std::setprecision(2) << std::fixed << vectorArr[i];
            else
                std::cout << std::setprecision(2) << std::fixed << vectorArr[i] << ", ";
        }
        std::cout << "}" << std::endl;
    }

    int getInt(int &a) {
        int indic;
        do {
            std::cin >> a;
            indic = 1;
            if (std::cin.eof())
                indic = -1;
            else if (!std::cin.good()) {
                std::cout << "Incorrect input. Try again" << std::endl;
                indic = 0;
                std::cin.clear();
                std::cin.ignore(INT_MAX, '\n');

            }
        } while(indic ==0);
        return indic < 0 ? -1 : 1;
    }
}