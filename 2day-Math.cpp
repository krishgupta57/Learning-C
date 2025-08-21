#include<iostream>
using namespace std;

int main()
{
    int x=5;
    int y=2;
    int z;
    z=x+y;
    cout<<"Addition="<<z<<endl;
    z=x-y;
    cout<<"Subtaction="<<z<<endl;
    z=x*y;
    cout<<"Multiplicaton="<<z<<endl;
    z=x/y;
    cout<<"Division="<<z<<endl;
    z=x%y;
    cout<<"Remainder="<<z<<endl;

    int x1=10;
    x1=x1+10;
    cout<<"+=  "<<x1<<endl;
    x1+=30;
    cout<<x1<<endl;
    x1-=30;
    cout<<x1<<endl;
    x1*=30;
    cout<<x1<<endl;
    x1/=30;
    cout<<x1<<endl;
    x1%=30;
    cout<<x1<<endl;

    return 0;
}


    //find area of triangle input taken from user

    /*float b,h,ans;
    cout<<"Enter the base of triangle="<<endl;
    cin>>b;
    cout<<"Enter the height of triangle="<<endl;
    cin>>h;
    ans=0.5*b*h;
    cout<<"area of triange="<<ans<<endl;


    return 0;
}*/
