#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <array>
#include <fstream>
#include <iterator>
using namespace std;

#ifndef CONJUGATE_GRADIENT_METHOD_MATRIX_H
#define CONJUGATE_GRADIENT_METHOD_MATRIX_H


class Matrix {
public:

    map <array<int, 2>, long double> newmap;
    void set();
    void printed();
    void read(string nazev);


};


#endif //CONJUGATE_GRADIENT_METHOD_MATRIX_H
