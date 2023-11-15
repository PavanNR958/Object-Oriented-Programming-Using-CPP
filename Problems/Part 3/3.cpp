#include<iostream>
#include<conio.h>
using namespace std;
class B{
    
    public:
    virtual ~B(){
        cout<<"B Virtual fun"<<endl;
    }
};
class C{
    
    public:
    virtual ~C(){
        cout<<"C Virtual fun"<<endl;
    }
};
class D: public B, public C{
    
    public:
     ~D(){
        cout<<"Derived destructor"<<endl;
    }
};
int main(){
    B *b=new D();
    delete b;
   return 0;
   /* o/p is error due to private inhirtance 
   */
}
