#include<iostream>
using namespace std;
class A
{
    const int a;
    int b;
   
    public:
    
    A(int x, int y):a(x)
    {
        b=y;
         cout<<"Intitilised";
    }

};


int main() {
    A obj1(2,4); //  o/p is "Intitilised"
 
    return 0;
}

