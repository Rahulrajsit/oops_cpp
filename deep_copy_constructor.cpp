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
    A(A &obj){              // Deep copy constructor
        this->a=obj.a;
        this->b=obj.b;
        strptr=new string;   // new space for copy constructor
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
    *obj2.strptr="RAMA";  // Deep copy constructor
    obj2.a=89;
    obj2.b=76;
    obj2.getinfo();
    obj1.getinfo();
}
