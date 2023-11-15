#include<iostream>
using namespace std;


class B{
    int a;
    public:

    virtual void fun1()=0;
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
};

int main()
{
    B  *ptr;// o/p is error
    D obj;
    obj.fun2();
    
    
    
}