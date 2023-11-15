#include<iostream>
#include<conio.h>
using namespace std;
class B{
    
    public:
    virtual ~B()=0;
};
B::~B(){
         cout<<"Base destructor"<<endl;
    }
class D: public B{
    
    public:
     ~D(){
        cout<<"Derived destructor"<<endl;
    }
    
};
int main(){
    B *b=new D();
    delete b;
   return 0;
   /* o/p is Derived destructor
Base destructor
   */
}
