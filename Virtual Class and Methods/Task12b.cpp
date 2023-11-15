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
        cout<<"Implemented pure vurtial function Base "<<endl;
    }
    virtual void fun3()=0;
};
class F:public D,B{
    public:
    void fun3(){
        
        cout<<"Implemented pure vurtial function D"<<endl;

    }
};

int main()
{
    F obj;
    obj.fun2();
    // o/p is error due to fun1() not implemented
    
    
}