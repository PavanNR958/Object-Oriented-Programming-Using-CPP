#include<iostream>
using namespace std;
class A{
    public:
    int add(int x,int y){
        return y+x;
    }
    int add(int x,int y, int z){
        return x+y+z;
    
    }
    int add(int *arr,int n){
        int s=0;
        for (auto i=0;i<n;i++){
            s+=arr[i];
        }
        return s;
    }
};


int main()
{
    int a=3,b=9,c=1;
    int arr[]={1,2,3,4};
    A obj;
    cout<<obj.add(a,b)<<endl;
    cout<<obj.add(a,b,c)<<endl;
    cout<<obj.add(arr,4)<<endl;
    
    return 0;//op is 12 13 10
}