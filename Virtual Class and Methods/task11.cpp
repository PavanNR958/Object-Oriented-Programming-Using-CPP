#include<iostream>
using namespace std;


class B{
    public:

    virtual void fun1()=0;
     void fun2(){
        cout<<"Base class"<<endl;
    }
};

class D: public B{
    public:

     void fun1(){
        cout<<"Implemented pure vurtial function in Derived "<<endl;
    }
};

int main()
{
    B  *ptr;// o/p is Base class
    D obj;
    ptr=&obj;

    ptr->fun2();
}