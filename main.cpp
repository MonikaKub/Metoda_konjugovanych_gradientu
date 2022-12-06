#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include "Matrix.h"
#include "Vektor.h"
#include <array>
#include <fstream>
#include <iterator>


using namespace std;


int n=50;

Vektor operator*(Matrix a, Vektor b)
{
    Vektor c;

    map <array<int, 2>,long double>:: iterator it=a.newmap.begin();

    long double pom=0;

    for(int j=0; it!=a.newmap.end(); it++,j++)
    {
        pom=(it->second)*b.newmap[it->first[1]];
        //cout<<(it->second)<<"*"<<b.newmap[it->first[1]]<<"="<<pom<<endl;
        c.newmap[it->first[0]]+=pom;
    }

    return c;
}
long double operator*(Vektor a, Vektor b)
{
    long double c=0;
    map <int, long double>:: iterator it=a.newmap.begin();

    for(int j=0; it!=a.newmap.end(); it++,j++)
    {
        c=c+(it->second)*b.newmap[it->first];
    }
    return c;

}
Vektor operator*(long double a, Vektor b)
{
    Vektor c;

    map <int,long double>:: iterator it=b.newmap.begin();

    long double pom=0;

    for(int j=0; it!=b.newmap.end(); it++,j++)
    {
        pom=a*(it->second);
        c.newmap[it->first]=pom;
    }


    return c;

}
Vektor operator-(Vektor a, Vektor b)
{
    Vektor c;
    map <int, long double>:: iterator it1=a.newmap.begin();
    map <int, long double>:: iterator it2=b.newmap.begin();
    vector <long double> pom; //pomocny vektor prvku ktere se zucastnili operace
    long double p; //pomocny prvek pro rozdil

    for(int j=0; it1!=a.newmap.end(); it1++,j++){
        p=(it1->second)-b.newmap[it1->first];
        c.newmap[it1->first]=p;
        pom.push_back(it1->first);}
    long double key=0;
    for(int j=0; it2!=b.newmap.end(); it2++,j++){
        key=it2->first;
        if (find(pom.begin(), pom.end(), key) != pom.end()) {}
        else {c.newmap[it2->first]=-it2->second;}
    }
    return c;
}
Vektor operator+(Vektor a, Vektor b)
{
    Vektor c;


    map <int, long double>:: iterator it1=a.newmap.begin();
    map <int,long double>:: iterator it2=b.newmap.begin();

    vector <long double> pom; //pomocny vektor prvku ktere se zucastnili operace
    long double p; //pomocny prvek pro rozdil

    for(int j=0; it1!=a.newmap.end(); it1++,j++)
    {

        p=(it1->second)+b.newmap[it1->first];
        c.newmap[it1->first]=p;

        pom.push_back(it1->first);

    }

    long double key=0;
    for(int j=0; it2!=b.newmap.end(); it2++,j++)
    {

        key=it2->first;
        if (find(pom.begin(), pom.end(), key) != pom.end()) {}
        else {c.newmap[it2->first]=it2->second;}

    }


    return c;
}

int main() {

    Matrix A;
    Vektor r,x0,p,z,x,b,null_v;
    long double alfa,beta,lrr,rr;

    A.read("Matice.txt");
    x0.setP();
    b.read("b.txt");

    r=b-(A*x0);
    lrr=r*r;
    p=r;
    x=x0;

    for(int k=1; k<=n; k++){
        z=A*p;
        alfa=lrr/(p*z);
        x=x+(alfa*p);
        r=r-(alfa*z);
        rr=r*r;
        if (rr==0) {break;}
        beta=rr/lrr;
        lrr=rr;
        p=r+(beta*p);
    }

    x.printed();
    return 0;
}
