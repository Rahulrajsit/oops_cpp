#include <iostream>
using namespace std;

class A{
public:
    virtual void getinfo()=0;  // Pure Virtual Class
};
class B:public A{
public:
    void getinfo(){
        cout<<"Hi from Raj"<<endl;
    }
};
int main(){
    B obj;
    obj.getinfo();

    A *obj2=new B();  // Abstract acces with base to drived class
    obj2->getinfo();
    return 0;
}
