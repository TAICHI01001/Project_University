#include <iostream>

using namespace std;

class A{
    private:
        int x;
    public:
        A(){
            x=0;
            cout<<"A \n";
        }
        A(int a,int b){
            x=a;
            cout<<a<<'\n'<<b<<'\n';
        }

};

int main(){
    cout<<"-----------------------------------------\n";
    cout<<"We will to test practices mid1 of school \n";
    cout<<"-----------------------------------------\n";
    A a1;
}