//sum of factortial

/*#include<iostream>
using namespace std;

int main()
{
    int i=1, fact=1, fsum=0,n;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(i<=n)
    {
        fact=fact*i;
        fsum=fsum+fact;
        i++;
    }
    cout<<"sum="<<fsum;
    return 0;
}*/

// reverse the number

/*#include<iostream>
using namespace std;

int main()
{
    int rsum=0, n;
    cout<<"enter the number="<<endl;
    cin>>n;
    while(n>0)
    {
        int r=n%10;
        rsum=rsum*10+r;
        n=n/10;
    }
    cout<<"reverse is="<<rsum<<endl;

    return 0;
}*/


//find the palendrom number

/*#include<iostream>
using namespace std;

int main()
{
    int rsum=0, n;
    cout<<"enter the number="<<endl;
    cin>>n;
    int m=n;
    while(n>0)
    {
        int r=n%10;
        rsum=rsum*10+r;
        n=n/10;
    }
    if (rsum==m) cout<<"palendrom"<<endl;
    else cout<<"not palendrom"<<endl;

    return 0;
}*/


//logical operator

/*#include<iostream>
using namespace std;

int main()
{


    return 0;
}*/

// if the condition is true

#include<iostream>
using namespace std;

int main()
{
    while(true)
    {
        int ch;
        cout<<"enter your choice="<<endl;
        cin>>ch;
        if(ch==1) cout<<"press 1"<<endl;
        else if(ch==2) cout<<"press 2"<<endl;
        else if(ch==3) break;
        else cout<<"wrong choice"<<endl;
    }
    return 0;
}


