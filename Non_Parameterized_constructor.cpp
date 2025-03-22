#include<iostream>
using namespace std;

class A{
    public:
    int x;
    int b;
    A(){
        x=100;
        b=200;
        cout<<"----Con----\n";
    }
    ~A(){
        cout<<"----Dis Con----\n";
    }
};
int main(){
    A obj1();  // Non-Parameterized constructor.
    cout<<obj1.x<<" "<<obj1.b<<endl;
}
