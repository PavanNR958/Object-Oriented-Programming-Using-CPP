#include<iostream>
using namespace std;


class B{
    int a;
    public:

    virtual void fun()=0;
     void fun2(){
        cout<<"Base class"<<endl;
    }
};

class D: public B{
    int a;
    public:
    D(){
        cout<<"Derived class"<<endl;
    }
};

int main()
{
    B obj1;// o/p is error due to pure virtual
    
    obj1.fun();
    
}