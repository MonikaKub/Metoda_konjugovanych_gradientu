#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <array>
#include <fstream>
#include <iterator>
#include <fstream>
using namespace std;

#include "Matrix.h"


void Matrix::set()
{
    newmap[{1,1}]=5;
    newmap[{1,2}]=-4;
    newmap[{2,1}]=-4;
    newmap[{2,2}]=5;
    newmap[{3,3}]=0.1;

}

void Matrix::printed()
{
    map <array<int, 2>, long double>:: iterator itern=newmap.begin();

    for(int j=0; itern!=newmap.end(); itern++,j++)
    {
        cout<<itern->first[0]<<" "<<itern->first[1]<<" "<<itern->second<<endl;
    }

}

void Matrix::read(string nazev) {
    int r, s;
    long double hodnota = 0;

    ifstream cteniZeSouboru(nazev, ios::binary);
        while (!cteniZeSouboru.eof()){


        cteniZeSouboru >> r >> s >> hodnota;
//        cout<<r<<s<<hodnota<<"\n";
        array<int, 2> pom = {r, s};
        newmap[pom] = hodnota;
        }
        /*
    if (!cteniZeSouboru.good()){
        cout << "ass" << endl;
    }
    int r, s;
    long double hodnota = 0;

    for (int i = 0; i < 148; i++) {
        cteniZeSouboru >> r >> s >> hodnota;
//        cout<<r<<s<<hodnota<<"\n";
        array<int, 2> pom = {r, s};
        newmap[pom] = hodnota;
    }*/
}
