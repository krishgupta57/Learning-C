#include<iostream>
using namespace std;

int main()
{
    cout<<"Pre and Post Increment"<<endl;
    int a=10;
    int b=a++;
    cout<<"The value of b="<<b<<endl;
    cout<<"The value of a="<<a<<endl;

    int x=10;
    int y=++x;
    cout<<"The value of y="<<y<<endl;
    cout<<"The value of x="<<x<<endl;

    cout<<"Pre and Post decrement"<<endl;
    int c=10;
    int d=c--;
    cout<<"The value of d="<<d<<endl;
    cout<<"The value of c="<<c<<endl;

    int e=10;
    int f=--e;
    cout<<"The value of f="<<f<<endl;
    cout<<"The value of e="<<e<<endl;
}
