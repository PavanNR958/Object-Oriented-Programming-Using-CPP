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
    Host bar;
    bar.print(); // error due to Host has no direct method  print
    return 0;
}