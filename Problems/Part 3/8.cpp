#include<iostream>
#include<conio.h>
using namespace std;
class Foo{
    
    public:
    Foo(int i=0){ _i=i;}
    void f(){
        cout<<"Hello hi"<<endl;
    }
    private:
    int _i;
};
int main(){
    Foo *p=0;
    p->f();
   return 0;
   /* o/p is Hello hi
   */
}
