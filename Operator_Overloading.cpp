// C++ Program to Demonstrate
// Operator Overloading
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

  
    Complex operator+(Complex const& obj)
    {
        Complex res(0,0);          // Here you have to define res(0,0) for consuctor
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4), c3(3, 6);
    Complex c4 = c1 + c2 + c3;
    c4.print();
}
