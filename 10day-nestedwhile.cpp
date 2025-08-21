#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    cout<<"Enter the number="<<endl;
    cin>>n;
    while(i<=n)
    {
        int j=1;

        while(j<=n)
        {
            cout<<" *";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    cout<<"Enter the number="<<endl;
    cin>>n;
    while(i<=n)
    {
        int j=1;

        while(j<=i)
        {
            cout<<" *";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main()
{
    int i=5,n=1;
    cout<<"Enter the number="<<endl;
    //cin>>i;
    while(i>=n)
    {
        int j=1;

        while(j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}
*/
