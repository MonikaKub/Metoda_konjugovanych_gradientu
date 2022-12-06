#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <algorithm>
#include <iostream>
#include <array>
#include <fstream>
#include <iterator>
#include <fstream>
using namespace std;
using namespace std;

#include "Vektor.h"


void Vektor::set()
{
    newmap[1]=1;
    newmap[2]=2;
    newmap[3]=3;

}
void Vektor::setN()
{
    newmap[1]=0;
    newmap[2]=0;
}
void Vektor::setP()
{
    for (int i = 1; i<=n; i++) {
    newmap[i]=0;
    }
}

void Vektor::printed()
{
    map <int, long double>:: iterator itern=newmap.begin();

    for(int j=0; itern!=newmap.end(); itern++,j++)
    {
        cout<<itern->first<<" "<<itern->second<<endl;
    }

}

void Vektor::read(string nazev) {


    ifstream cteniZeSouboru(nazev, ios::binary);

    int r;
    long double hodnota = 0;


    while (!cteniZeSouboru.eof()){


    cteniZeSouboru >> r >> hodnota;
//        cout<<r<<s<<hodnota<<"\n";
        newmap[r] = hodnota;
        }
/*
    for (int i = 0; i < 50; i++) {
        cteniZeSouboru >> r >>hodnota;
//        cout<<r<<hodnota<<"\n";

        newmap[r] = hodnota;
    }
    */
}
