#include <iostream>
using namespace std;

class A{
    public:
    int a;
    int b;
    A(int a,int b){
        this->a=a;
        this->b=b;
    }
    A(A &obj){              // shallow copy constructor
        this->a=obj.a;
        this->b=obj.b;
    }
    void getinfo(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    A obj1(10,20);
    A obj2(obj1);          // shallow copy constructor
    obj2.getinfo();
}
