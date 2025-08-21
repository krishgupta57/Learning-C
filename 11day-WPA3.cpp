//WPA to find all the palendrome no. between two user input?

/*#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter the number="<<endl;
    cin>>n1>>n2;
    int n3=n1+1;
    while(n3<n2)
    {
        int temp=n3,rev=0;
        while(temp>0)
        {
            int r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        if(rev==n3) cout<<"palendrome="<<rev<<endl;
        n3++;
    }
    return 0;
}*/


#include<iostream>
using namespace std;

int main()
{
    int n1=100,n2=5,i=1;
    int n3=n1+1;
    while(i<=5)
    {
        int temp=n3,ans=0;
        while(temp>0)
        {
            int r=temp%10;
            ans=ans*10+r;
            temp=temp/10;
        }
        if(n3==ans)
        {
            cout<<"palendrome="<<ans<<endl;
            i++;
        }
        n3++;
    }
    return 0;
}
