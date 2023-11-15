#include<iostream>
using namespace std;

class Host{
    public:
    class Nested{
        public:
        void print(){
            cout<<"hello world ";
        }
    };
};
int main(){
    Host ::Nested foo;
    foo.print(); // o/p is hello world 
    return 0;
}