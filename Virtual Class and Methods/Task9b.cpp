#include<iostream>
using namespace std;


class B{
    int a;
    public:

    virtual void fun1(){
         cout<<"Base class"<<endl;
    }
     void fun2(){
        cout<<"Base class"<<endl;
    }
};

class D: public B{
    int a;
    public:
    void fun1(){
         cout<<"Derived "<<endl;
    }
     void fun2(){
        cout<<"Derived "<<endl;
    }
};

int main()
{
    B * b;// o/p is Derived
    D obj;
    b=&obj;
    b->fun1();
    
    
    
}