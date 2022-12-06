#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

#ifndef CONJUGATE_GRADIENT_METHOD_VEKTOR_H
#define CONJUGATE_GRADIENT_METHOD_VEKTOR_H


class Vektor {
public:
    map <int, long double> newmap;
    int n;

    void set();
    void setN();
    void setP();
    void printed();
    void read(string nazev);

};


#endif //CONJUGATE_GRADIENT_METHOD_VEKTOR_H
