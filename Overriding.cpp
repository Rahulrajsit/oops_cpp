#include <iostream>
using namespace std;

class A{
public:
    int a;
    int b;
    void printData2(){
        cout<<a<<" "<<b<<" printData2 From A"<<endl;
    }
    void printData(){
        cout<<a<<" "<<b<<" printData From A"<<endl;
    }
};
class B: public A{
public: 
    void printData1(){
        cout<<a<<" "<<b<<" printData1 From B"<<endl;        
    }
    void printData(){
        cout<<a<<" "<<b<<" printData From B"<<endl;
    }
};
int main(){
    B a1;
    a1.a=10;
    a1.b=20;

    a1.printData();
    return 0;
}
