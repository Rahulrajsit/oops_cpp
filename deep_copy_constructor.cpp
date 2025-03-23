#include <iostream>
using namespace std;

class A{
    public:
    int a;
    int b;
    string *strptr;
    A(int a,int b,string name){
        this->a=a;
        this->b=b;
        strptr=new string;
        *strptr=name;
    }
    A(A &obj){              // shallow copy constructor
        this->a=obj.a;
        this->b=obj.b;
        strptr=new string;
        *strptr=*obj.strptr;
    }
    void getinfo(){
        cout<<a<<" "<<b<<" "<<*strptr<<endl;
    }
};

int main(){
    A obj1(10,20,"Rahul Raj");
    obj1.getinfo();
    A obj2(obj1);     
    *obj2.strptr="RAMA";  // shallow copy constructor
    obj2.getinfo();
    obj1.getinfo();
}
