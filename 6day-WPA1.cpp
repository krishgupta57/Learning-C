//WPA to print the sum of odd and even no. taking user input?

/*#include<iostream>
using namespace std;

int main()
{
    cout<<"even and odd sum="<<endl;
    int n,osum=0, esum=0, i=1;
    cout<<"enter the number="<<endl;
    cin>>n;
    while (i<=n)
    {
        if(i%2==0) esum=esum+i;
        else osum=osum+i;

        i++;
    }

    cout<<"even sum="<<esum<<endl;
    cout<<"odd sum="<<osum<<endl;
    return 0;
}*/


#include<iostream>
using namespace std;

int main()
{
    cout<<"FACTOR OF THE NUMBER"<<endl;

    int n, fact=0, i=1;

    cout<<"Enter the number="<<endl;
    cin>>n;
    while(i<=n)
    {
        if(n%i==0) fact=fact+i;
        i++;
    }
    cout<<"Factor="<<fact<<endl;
    return 0;
}
