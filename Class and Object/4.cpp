#include<iostream>
using namespace std;
class Distance
{
    int a;
    friend int addFive(Distance);
    public:
    Distance() {
        a=0;
    }
        

};

int addFive (Distance d)
{
    d.a+=5;
    return d.a;
}
int main() {
   Distance d;
   cout<<"distande: "<<addFive(d); //  o/p is 'distande: 5'
    return 0;
}

