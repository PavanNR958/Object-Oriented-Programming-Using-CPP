#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    A(){
      
        cout<<" constructor class A"<<endl;
    }
}; 
class myclass{
public:
    static A getvalue(){
        static A a;
        cout<<"hello"<<endl;
        return a;
    }
};
int main(){
    myclass obj1;
    A obj2 = myclass::getvalue();
    A obj3=obj1.getvalue();
   return 0;
   /* o/p is 
 constructor class A
hello
hello
   */
}
