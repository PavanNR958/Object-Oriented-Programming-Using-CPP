#include<iostream>
using namespace std;


class A{
    public:

    virtual void fun1(){
        cout<<"A"<<endl;
    }
};

class B:public A{
     public:

    void fun1(){
        cout<<"B"<<endl;
    }
};
class C: public B{
     public:
    void fun1(){
        cout<<"C"<<endl;
    }
};

int main()
{
    A *ptr;
    B b; C c;
    ptr = &b;
    ptr->fun1();
    ptr=&c;
    ptr->fun1();
    // o/p is B C
    
    
}