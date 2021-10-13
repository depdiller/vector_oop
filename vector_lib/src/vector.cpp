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

//    double *Vector::getVectArr() const {
//    }

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
            std::cout << "Choose option: 1. Add\t2. Exit" << std::endl;
            getNum(choice);
            if (choice != 1)
            std::cout << "Enter new element if this format: (index, number) -> ";
            if (getNum(index, 0) != -1 && getNum(numb) != -1) {
                if (countElm == SIZE)
                    throw std::invalid_argument("exceeded_size");
                this->setEl(index, numb);
                ++countElm;
            } else
                throw std::invalid_argument("entered eof during reading");
        } while(choice != 2);
    }

    void Vector::sum(Vector b) {
        for (int i = 0; i < SIZE; ++i) {
            vectorArr[i] = vectorArr[i] + b.vectorArr[i];
        }
    }

    void Vector::sub(Vector b) {
        for (int i = 0; i < SIZE; ++i) {
            vectorArr[i] = vectorArr[i] - b.vectorArr[i];
        }
    }

    void Vector::mult(Vector b) {
        for (int i = 0; i < SIZE; ++i) {
            vectorArr[i] = vectorArr[i] * b.vectorArr[i];
        }
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
            if (i < countElm) {
                if (i == SIZE - 1)
                    std::cout << std::setprecision(2) << std::fixed << vectorArr[i];
                else
                    std::cout << std::setprecision(2) << std::fixed << vectorArr[i] << ", ";
            }
            else {
                if (i == SIZE - 1)
                    std::cout << 0;
                else
                    std::cout << 0 << ", ";
            }
        }
        std::cout << "}" << std::endl;
    }
}