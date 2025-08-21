#include<iostream>
using namespace std;

int main()
{
    cout<<"enter Length"<<endl;
    int l;
    cin>>l;

    cout<<"enter Width"<<endl;
    int w;
    cin>>w;

    cout<<"enter Base"<<endl;
    int b;
    cin>>b;

    cout<<"enter Height"<<endl;
    int h;
    cin>>h;

    cout<<"enter Radius"<<endl;
    int r;
    cin>>r;

    int square;
    square=l*l;
    cout<<"Area of Square is = "<<square<<endl;

    int rectangle;
    rectangle=l*w;
    cout<<"Area of Rectangle is = "<<rectangle<<endl;

    float triangle;
    triangle=0.5*b*h;
    cout<<"Area of Triangle is = "<<triangle<<endl;

    int parallelogram;
    parallelogram=b*h;
    cout<<"Area of Parallelogram is = "<<parallelogram<<endl;

    float circle;
    circle=3.14*r*r;
    cout<<"Area of circle is = "<<circle<<endl;
    return 0;
}
