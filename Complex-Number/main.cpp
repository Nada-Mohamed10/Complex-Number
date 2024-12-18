#include <iostream>

using namespace std;
struct complex
{
    int real;
    int imag;
    complex Add( complex c2);
   void printComplex();
   void setComplex( int r , int i);
};


int main()
{
   complex cp1,cp2,cp3;
    cp1.setComplex(10,11);
    cp2.setComplex(4,5);
    cp3=cp1.Add(cp2);
    cp3.printComplex();

    return 0;
}


complex complex:: Add( complex c2)
{
    complex temp;
    temp.real=real+c2.real;
    temp.imag=imag+c2.imag;
    return temp;
}

void  complex :: printComplex()
{
    cout<<"Real Number = "<<real<<endl;
    cout<<"imaginary Number = "<<imag <<"i"<<endl;

}



void complex :: setComplex( int r , int i)
{

    real=r;
    imag=i;
}
