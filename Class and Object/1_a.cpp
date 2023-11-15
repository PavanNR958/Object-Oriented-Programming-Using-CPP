#include<iostream>
using namespace std;
//error
class A
{
   
    int a;
    void modify_a(int x){
        a=x;
        cout<<x;
}
};
int main() {
    A aa;
    aa.modify_a(10);
    cout<<aa.a<<endl;
    return 0;
}

