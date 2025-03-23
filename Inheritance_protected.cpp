#include <iostream>
using namespace std;

class A{
protected:
    int age=90;
    int roll=2322216;
};
class B: protected A{
public:
    int money=902113;
    void getinfo(){
        cout<<"Age "<<age<<endl;
        cout<<"Roll "<<roll<<endl;
        cout<<"Money "<<money<<endl;
    }
};
int main(){
    B obj1;
    obj1.getinfo();
}
