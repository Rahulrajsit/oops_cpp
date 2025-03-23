#include<iostream>
using namespace std;

class A{
    public:
    int x;
    int b;
    A(int x,int b){
        (*this).x=x;
        this->b=b;
        cout<<"----Con----\n";
    }
    ~A(){
        cout<<"----Dis Con----\n";
    }
};
int main(){
    A obj1(100,200);  // default copy constructor.
    A obj3(100,200);
    A obj4(100,200);
    A obj2(obj1);    // like obj1 copy all data to obj2
    
    
    cout<<obj2.x<<" "<<obj2.b<<endl;
}
