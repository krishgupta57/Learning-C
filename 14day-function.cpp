/*#include<iostream>
using namespace std;

void display()
{
    cout<<"Hello Calling Function"<<endl;
}
int display1(int a, int b);
int display2();
int display3(int x,int y);
int main()
{
    display();
    display1(10,10);
    int res=display2();
    cout<<res<<endl;
    cout<<display3(23,45)<<endl;
    return 0;
}

int display1(int a,int b)
{
    int c=a+b;
    cout<<"the value of a="<<c<<endl;
}

int display2()
{
    char a='a';
    return a;
}

int display3(int x,int y)
{
    int c=x+y;
    return c;
}
*/



//Function Overloading

#include<iostream>
using namespace std;

int myfunc(int a,int b)
{
    cout<<a<<" "<<b<<endl;
}
int myfunc(int b)
{
    cout<<b<<endl;
}

int main()
{
    myfunc(10);
    myfunc(10,20);

    return 0;
}
