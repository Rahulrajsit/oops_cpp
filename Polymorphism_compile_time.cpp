#include <iostream>
using namespace std;

class A{
public:
    A(){
        cout<<"1 st"<<endl;
    }
    A(int s){
        cout<<"2 st "<<s<<endl;
    }
};
int main(){
    A a;
    A a1(100);   // Polymorphism_compile_time
}
