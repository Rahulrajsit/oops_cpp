#include <iostream>
using namespace std;

class A
{
private:
    int x=90;
    int y=120;

public:
    friend void printData(A &obj);
};
void printData(A &obj){
    cout<< obj.x << " "<<obj.y<<endl;
}
int main()
{
    A obj;
    printData(obj);
    return 0;
}
