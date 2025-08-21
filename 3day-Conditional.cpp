#include<iostream>
using namespace std;

int main()
{
    /*cout<<"enter your age"<<endl;
    int age;
    cin>>age;

    if(age>=18)
    {
        cout<<"you can give vote"<<endl;
    }
    else
    {
        cout<<"you cannot give vote"<<endl;
    }*/

    //nested else if


   /* cout<<"Enter your days"<<endl;
    int days;
    cin>>days;
    if(days==0)
    {
        cout<<"Sunday"<<endl;
    }
    else
    {
        if(days==1)
    {
        cout<<"Monday"<<endl;
    }
    else
    {
        if(days==2)
    {
        cout<<"Tuesday"<<endl;
    }
    else
    {
        if(days==3)
    {
        cout<<"Wednesday"<<endl;
    }
    else
    {
        if(days==4)
    {
        cout<<"Thursday"<<endl;
    }
    else
    {
        if(days==5)
    {
        cout<<"Friday"<<endl;
    }
    else
    {
        if(days==6)
    {
        cout<<"Saturday"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
    }
    }
    }
    }
    }
    }*/

    //else if

    cout<<"Enter your days"<<endl;
    int days;
    cin>>days;
    if(days==0) cout<<"Sunday"<<endl;
    else if(days==1) cout<<"monday"<<endl;
    else if(days==2) cout<<"Tuesday"<<endl;
    else if(days==3) cout<<"Wednesday"<<endl;
    else if(days==4) cout<<"Thursday"<<endl;
    else if(days==5) cout<<"Friday"<<endl;
    else if(days==6) cout<<"Saturday"<<endl;
    else cout<<"days not found"<<endl;
    return 0;
}
