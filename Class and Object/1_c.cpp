#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    A(int a){
        x=a;
}
};
int main() {
    A a(10);
    cout<<a.x<<endl;//op is 10
    return 0;
}

