#include<iostream>
#include<conio.h>
using namespace std;
class Foo{
    
    public:
    int f(string str){
        cout<<str<<endl;
        return 1;
    }
};
int main(){
    int (Foo::*fptr)(string)=&Foo::f;
    Foo obj;
    (obj.*fptr)("Hello");
    Foo* p=&obj;
    (p->*fptr)("world");
   return 0;
   /* o/p is Hello
world
   */
}
