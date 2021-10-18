//
// Created by stani on 13.10.2021.
//
#include "vector.h"

namespace lab3 {
    Vector::Vector(int size, double elmArr[]) {
        if (size > SIZE)
            throw std::invalid_argument("exceeded_size");
        currSize = size;
        int i;
        for (i = 0; i < size; ++i) {
            vectorArr[i] = *elmArr;
            ++elmArr;
        }
    }

    double Vector::getEl(int index) const {
        // index from 0 to n
        if (index > currSize - 1)
            throw std::invalid_argument("exceeded_size");
        return vectorArr[index];
    }

    Vector &Vector::setEl(int index, double elem) {
        if (index >= SIZE)
            throw std::invalid_argument("exceeded_size");
        vectorArr[index] = elem;
        if (index >= currSize)
            ++currSize;
        return *this;
    }

    void Vector::inputInit(std::istream &s) {
        int i = currSize, size = 0;
        double tmp;
        do {
            if (size >= SIZE)
                throw std::invalid_argument("exceeded_size");
           if (s.good()) {
               s >> tmp;
           }
           else
               throw std::invalid_argument("error in inputInit");
            vectorArr[i] = tmp;
           ++size;
           ++i;
        } while (s.peek() != '\n' && !s.eof());
        currSize = size;
    }

    void Vector::print(std::ostream &s) const {
        s << "{";
        for (int i = 0; i < currSize; ++i) {
            if (i == currSize - 1)
                s << std::setprecision(2) << std::fixed << vectorArr[i];
            else
                  s << std::setprecision(2) << std::fixed << vectorArr[i] << ", ";
        }
        s << "}" << std::endl;
    }


    Vector& Vector::sum(Vector b) const {
        int minSize = this->currSize < b.currSize ? this->currSize : b.currSize;
        Vector *c = new Vector;
        int i;
        for (i = 0; i < minSize; ++i) {
            c->vectorArr[i] = vectorArr[i] + b.vectorArr[i];
        }
        if (b.currSize == i) {
            for (i = 0; i < this->currSize; ++i) {
                c->vectorArr[i] = vectorArr[i] + 0;
            }
        }
        else {
            for (i = 0; i < b.currSize; ++i) {
                c->vectorArr[i] = 0 + b.vectorArr[i];
            }
        }
        c->currSize = this->currSize > b.currSize ? this->currSize : b.currSize;
        return *c;
    }

    Vector& Vector::sub(Vector b) const {
        int minSize = this->currSize < b.currSize ? this->currSize : b.currSize;
        Vector *c = new Vector;
        int i;
        for (i = 0; i < minSize; ++i) {
            c->vectorArr[i] = vectorArr[i] - b.vectorArr[i];
        }
        if (b.currSize == i) {
            for (i = 0; i < this->currSize; ++i) {
                c->vectorArr[i] = vectorArr[i] - 0;
            }
        }
        else {
            for (i = 0; i < b.currSize; ++i) {
                c->vectorArr[i] = 0 - b.vectorArr[i];
            }
        }
        c->currSize = this->currSize > b.currSize ? this->currSize : b.currSize;
        return *c;
    }

    Vector& Vector::mult(Vector b) const {
        Vector *c = new Vector;
        for (int i = 0; i < SIZE; ++i) {
            c->vectorArr[i] = vectorArr[i] * b.vectorArr[i];
        }
        c->currSize = this->currSize > b.currSize ? this->currSize : b.currSize;
        return *c;
    }

    double Vector::norm() {
        double max = 0;
        for (int i = 0; i < currSize; ++i) {
            if (lab3::definitelyGreaterThan(vectorArr[i], max, epsilon))
                max = vectorArr[i];
        }
        return max;
    }

    void Vector::put(double elem) {
        if (currSize == SIZE)
            throw std::invalid_argument("exceeded_size");
        vectorArr[currSize] = elem;
    }

    bool approximatelyEqual(double a, double b, double epsilon) {
        return fabs(a - b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
    }

    bool definitelyGreaterThan(double a, double b, double epsilon) {
        return (a - b) > ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
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