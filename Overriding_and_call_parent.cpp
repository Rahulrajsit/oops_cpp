#include <iostream>
using namespace std;

class A{
public:
    int a;
    int b;
    void printData(){
        cout<<a<<" "<<b<<" printData From A"<<endl;
    }
};
class B: public A{
public: 
    void printData(){
        cout<<a<<" "<<b<<" printData From B"<<endl;
        A::printData();
    }
};
int main(){
    B a1;
    a1.a=10;
    a1.b=20;

    a1.printData();
    return 0;
}
