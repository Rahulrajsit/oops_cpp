#include <iostream>
using namespace std;

class Papa{
public:
    int a;
    void getV(){
        cout<<"From A "<<a<<endl;
    }
};
class Maa{
public:
    int b;
    void getV(){
        cout<<"From B "<<b<<endl;
    }
};

class C:public Papa, public Maa{
public:
    C(int a,int b){
        this->a=a;
        this->b=b;
    }
    void getInfo(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    C obj(10,20);
    obj.getInfo();
    obj.Papa::getV();
    obj.Maa::getV();
}
