#include <iostream>
using namespace std;

class A{
public:
    virtual void getInfo(){
        cout<<"From A"<<endl;
    }
};
class B:public A{
public:
    void getInfo() override{
        cout<<"From B"<<endl;
    }
};
int main(){
    B b1;

    b1.getInfo();

}
