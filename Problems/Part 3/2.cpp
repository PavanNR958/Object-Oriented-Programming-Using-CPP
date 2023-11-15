#include<iostream>
#include<conio.h>
using namespace std;
class One{
    
    public:
   virtual int fun(int x, int y){
    return(x++ + ++y + x<<2);
   }
};   
class Two: public One{
    
    public:
   int fun(int x, int y){
    return(++x + y++ + y>>2);
   }
   virtual int fun2()=0;
};   
int main(){
    One *ptr;
    Two obj;
    ptr = &obj;
   /* o/p is error due to private inhirtance 
   */
}
