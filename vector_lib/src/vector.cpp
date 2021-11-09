//
// Created by stani on 13.10.2021.
//
#include "vector.h"

namespace lab3 {
    // constructor
    Vector::Vector(int size, double elmArr[]) {
        try {
            vectorArr = new double[size];
        } catch(std::bad_alloc &ba) {
            throw ba;
        }
        currSize = size;
        int i;
        for (i = 0; i < size; ++i) {
            vectorArr[i] = *elmArr;
            ++elmArr;
        }
    }
    Vector::Vector(const Vector &v) {
        std::cout << "===Copy constructor called===" << std::endl;

        vectorArr = new double[v.currSize];
        for (int i = 0; i < v.currSize; ++i)
            vectorArr[i] = v.vectorArr[i];
        currSize = v.currSize;
    }
    Vector::Vector(Vector &&v) noexcept: vectorArr(v.vectorArr), currSize(v.currSize) {
        std::cout << "===Move constructor called===" << std::endl;

        v.vectorArr = nullptr;
    }

    void Vector::put(double elem) {
        double *tmpVector;
        try {
            tmpVector = new double[currSize + 10];
        } catch(std::bad_alloc &ba) {
            throw ba;
        }
        memcpy(tmpVector, vectorArr, currSize);
        delete[] vectorArr;
        vectorArr = tmpVector;
        vectorArr[currSize] = elem;
        currSize += 10;
    }

    // getters
    double Vector::getEl(int index) const {
        // index from 0 to n
        if (index > currSize - 1)
            throw std::invalid_argument("exceeded_size");
        return vectorArr[index];
    }

    // setters
    Vector &Vector::setEl(int index, double elem) {
        if (index >= currSize)
            throw std::invalid_argument("exceeded_size");
        vectorArr[index] = elem;
        if (index >= currSize)
            ++currSize;
        return *this;
    }

    // arithmetic methods
    Vector Vector::sum(const Vector &b) const {
        int minSize = this->currSize < b.currSize ? this->currSize : b.currSize;
        Vector c = b;
        int i;
        for (i = 0; i < minSize; ++i) {
            c.vectorArr[i] += vectorArr[i];
        }
        if (minSize < this->currSize) {
            for (; i < this->currSize; ++i) {
                c.vectorArr[i] += vectorArr[i];
            }
        }
        else if (minSize < b.currSize) {
            for (; i < b.currSize; ++i) {
                c.vectorArr[i] = 0 + b.vectorArr[i];
            }
        }
        c.currSize = this->currSize > b.currSize ? this->currSize : b.currSize;
        return c;
    }
    Vector Vector::sub(const Vector &b) const {
        int minSize = this->currSize < b.currSize ? this->currSize : b.currSize;
        Vector c = b;
        int i;
        for (i = 0; i < minSize; ++i) {
            c.vectorArr[i] = vectorArr[i] - b.vectorArr[i];
        }
        if (minSize < this->currSize) {
            for (; i < this->currSize; ++i) {
                c.vectorArr[i] = vectorArr[i];
            }
        }
        else if (minSize < b.currSize){
            for (; i < b.currSize; ++i) {
                c.vectorArr[i] = 0 - b.vectorArr[i];
            }
        }
        c.currSize = this->currSize > b.currSize ? this->currSize : b.currSize;
        return c;
    }
    Vector Vector::mult(const Vector &b) const {
        int minSize = this->currSize < b.currSize ? this->currSize : b.currSize;
        Vector c = b;
        int i;
        for (i = 0; i < minSize; ++i) {
            c.vectorArr[i] = vectorArr[i] * b.vectorArr[i];
        }
        if (minSize < this->currSize) {
            for (; i < this->currSize; ++i) {
                c.vectorArr[i] = 0;
            }
        }
        else if (minSize < b.currSize){
            for (; i < b.currSize; ++i) {
                c.vectorArr[i] = 0;
            }
        }
        c.currSize = this->currSize > b.currSize ? this->currSize : b.currSize;
        return c;
    }
    double Vector::norm() const {
        double max = 0;
        for (int i = 0; i < currSize; ++i) {
            if (lab3::definitelyGreaterThan(vectorArr[i], max, epsilon))
                max = vectorArr[i];
        }
        return max;
    }

    // additional members
    std::istream &Vector::inputInit(std::istream &s) {
        int i = currSize, size = 0;
        double tmp;
        do {
            if (size >= currSize) {
                double *tmpVector;
                try {
                    tmpVector = new double[currSize + 10];
                } catch(std::bad_alloc &ba) {
                    throw ba;
                }
                memcpy(tmpVector, vectorArr, currSize);
                delete[] vectorArr;
                vectorArr = tmpVector;
                currSize += 10;
            }
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
        return s;
    }
    std::ostream &Vector::print(std::ostream &s) const {
        s << "{";
        for (int i = 0; i < currSize; ++i) {
            if (i == currSize - 1)
                s << std::setprecision(2) << std::fixed << vectorArr[i];
            else
                  s << std::setprecision(2) << std::fixed << vectorArr[i] << ", ";
        }
        s << "}" << std::endl;
        return s;
    }

    // Overloaded Operations
    Vector &Vector::operator=(const Vector &v) {
        std::cout << "=== Copy operator ===" << std::endl;

        if (&v != this) {
            vectorArr = new double[v.currSize];
            for (int i = 0; i < v.currSize; ++i)
                vectorArr[i] = v.vectorArr[i];
            currSize = v.currSize;
        }
        return *this;
    }
    Vector &Vector::operator=(Vector &&v) noexcept {
        std::cout << "=== move operator ===" << std::endl;

        if (&v != this) {
            delete[] vectorArr;

            vectorArr = v.vectorArr;
            currSize = v.currSize;
            v.vectorArr = nullptr;
        }
        return *this;
    }
    std::ostream &operator<<(std::ostream &s, const Vector &v) {
        s << "{";
        for (int i = 0; i < v.currSize; ++i) {
            if (i == v.currSize - 1)
                s << std::fixed << std::setprecision(2) << v.vectorArr[i];
            else
                s << std::fixed << std::setprecision(2) << v.vectorArr[i] << ", ";
        }
        s << "}" << std::endl;
        return s;
    }
    std::istream &operator>>(std::istream &is, Vector &v) {
        int i = v.currSize, size = 0;
        double tmp;
        do {
            if (size >= v.currSize) {
                double *tmpVector;
                try {
                    tmpVector = new double[v.currSize + 10];
                } catch (std::bad_alloc &ba) {
                    throw ba;
                }
                memcpy(tmpVector, v.vectorArr, v.currSize);
                delete[] v.vectorArr;
                v.vectorArr = tmpVector;
                v.currSize += 10;
            }
            if (is.good()) {
                is >> tmp;
            }
            else
                throw std::invalid_argument("error in inputInit");
            v.vectorArr[i] = tmp;
            ++size;
            ++i;
        } while (is.peek() != '\n' && !is.eof());
        v.currSize = size;
        return is;
    }
    Vector Vector::operator+(const Vector &b) {
        int minSize = this->currSize < b.currSize ? this->currSize : b.currSize;
        Vector c = b;
        int i;
        for (i = 0; i < minSize; ++i) {
            c.vectorArr[i] += this->vectorArr[i];
        }
        if (minSize < this->currSize) {
            for (; i < this->currSize; ++i) {
                c.vectorArr[i] += this->vectorArr[i];
            }
        }
        else if (minSize < b.currSize) {
            for (; i < b.currSize; ++i) {
                c.vectorArr[i] = 0 + b.vectorArr[i];
            }
        }
        c.currSize = this->currSize > b.currSize ? this->currSize : b.currSize;
        return std::move(c);
    }
    Vector Vector::operator-(const Vector &b) {
        int minSize = this->currSize < b.currSize ? this->currSize : b.currSize;
        Vector c = b;
        int i;
        for (i = 0; i < minSize; ++i) {
            c.vectorArr[i] = this->vectorArr[i] - b.vectorArr[i];
        }
        if (minSize < this->currSize) {
            for (; i < this->currSize; ++i) {
                c.vectorArr[i] = this->vectorArr[i];
            }
        }
        else if (minSize < b.currSize) {
            for (; i < b.currSize; ++i) {
                c.vectorArr[i] = 0 - b.vectorArr[i];
            }
        }
        c.currSize = this->currSize > b.currSize ? this->currSize : b.currSize;
        return std::move(c);
    }
    Vector Vector::operator*(const Vector &b) {
        int minSize = this->currSize < b.currSize ? this->currSize : b.currSize;
        Vector c = b;
        int i;
        for (i = 0; i < minSize; ++i) {
            c.vectorArr[i] = this->vectorArr[i] * b.vectorArr[i];
        }
        if (minSize < this->currSize) {
            for (; i < this->currSize; ++i) {
                c.vectorArr[i] = 0;
            }
        }
        else if (minSize < b.currSize){
            for (; i < b.currSize; ++i) {
                c.vectorArr[i] = 0;
            }
        }
        c.currSize = this->currSize > b.currSize ? this->currSize : b.currSize;
        return std::move(c);
    }
    Vector &Vector::operator-() {
        for (int i = 0; i < currSize; ++i)
            vectorArr[i] = -vectorArr[i];
        return *this;
    }
    Vector &Vector::operator+=(const Vector &b) {
        int minSize = this->currSize < b.currSize ? this->currSize : b.currSize;
        int i;
        for (i = 0; i < minSize; ++i) {
            vectorArr[i] += b.vectorArr[i];
        }
        if (minSize > this->currSize) {
            for (; i < b.currSize; ++i) {
                vectorArr[i] += b.vectorArr[i];
            }
        }
        currSize = this->currSize > b.currSize ? this->currSize : b.currSize;
        return *this;
    }
    const Vector &Vector::operator++() {
        for (int i = 0; i < currSize; ++i)
            ++vectorArr[i];
        return *this;
    }
    Vector Vector::operator++(int) {
        Vector tmp = *this;
        for (int i = 0; i < currSize; ++i)
            ++vectorArr[i];
        return std::move(tmp);
    }
    Vector &Vector::operator()(int index, double element) {
        if (index >= currSize)
            throw std::invalid_argument("exceeded_size");
        vectorArr[index] = element;
        if (index >= currSize)
            ++currSize;
        return *this;
    }

    // optional non-members
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