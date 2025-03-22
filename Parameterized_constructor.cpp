#include<iostream>
using namespace std;

class A{
    public:
    int x;
    int b;
    A(int x,int b){
        this->x=x;
        this->b=b;
        cout<<"----Con----\n";
    }
    ~A(){
        cout<<"----Dis Con----\n";
    }
};
int main(){
    A obj1(100,200);  // Parameterized constructor.
    cout<<obj1.x<<" "<<obj1.b<<endl;
}
