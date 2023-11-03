#include <iostream>

using namespace std;

class C;
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
class B:public A{
    private:
        int y;
    public:
        B(){
            y=0;
            cout<<"B \n";
        }
        B(int a,int b):A(b,a){
            y=a;
            cout<<a+b<<"\n";
        }
        friend int equal(B,C);
};
class C{
    private:
        int z;
    public:
        C(){
            z=1;
            cout<<"C \n";
        }
        friend int equal(B,C);
};
int equal(B b,C c){
    return (b.y==c.z);
}
class D:public B{
    public:
        D(){
            cout<<"D \n";
        }
        D(int k):B(2,3){
            cout<<k<<"\n";
        }
}



int main(){
    cout<<"-----------------------------------------\n";
    cout<<"We will to test practices mid1 of school \n";
    cout<<"-----------------------------------------\n";
    A a1;
    B b1(4,5);
}