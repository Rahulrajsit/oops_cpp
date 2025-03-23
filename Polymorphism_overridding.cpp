#include <iostream>
using namespace std;

class A{
public:
    void getInfo(){
        cout<<"From A"<<endl;
    }
};
class B:public A{
public:
    void getInfo(){
        cout<<"From B"<<endl;
    }
};
int main(){
    B b1;
    b1.getInfo();  // Polymorphism_overridding_run_time
}
