#include<iostream>
using namespace std;

int main()
{
    int *p;
    int x=10;
    p=&x;
    cout<<p<<endl;
    cout<<*p<<endl;
    int **p1=&p;
    cout<<p1<<endl;
    cout<<*p1<<endl;
    cout<<**p1<<endl;


    return 0;
}
