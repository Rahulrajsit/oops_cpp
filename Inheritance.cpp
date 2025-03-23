#include <iostream>
using namespace std;

class A{
public:
    int age;
    int roll;
};
class B: public A{
public:
    int money;
    void getinfo(){
        cout<<"Age "<<age<<endl;
        cout<<"Roll "<<roll<<endl;
        cout<<"Money "<<money<<endl;
    }
};
int main(){
    B obj1;
    obj1.age=90;
    obj1.roll=2322216;
    obj1.money=1200;
    obj1.getinfo();
}
