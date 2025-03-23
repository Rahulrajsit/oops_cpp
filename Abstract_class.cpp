#include <iostream>
using namespace std;

class A{                // Abstract class and obj you can not create for this.
public:
    virtual void getinfo()=0;  // Pure Virtual Class use with virtual key 
};
class B:public A{
public:
    void getinfo(){
        cout<<"Hi from Raj";
    }
};
int main(){
    B obj;
    obj.getinfo();

    //A obj1;      // Not possible for abstract class
    return 0;
}
