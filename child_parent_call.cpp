#include <iostream>
using namespace std;

class A{
public:
    int age;
    int roll;
    A(int age,int roll){
        this->age=age;
        this->roll=roll;
    }
};
class B: public A{
public:
    int money;
    B(int age,int roll,int money):A(age,roll){
        this->age=age;
        this->roll=roll;
        this->money=money;
    }
    void getinfo(){
        cout<<"Age "<<age<<endl;
        cout<<"Roll "<<roll<<endl;
        cout<<"Money "<<money<<endl;
    }
};
int main(){
    B obj1(100,200,7600);
    obj1.getinfo();
}
