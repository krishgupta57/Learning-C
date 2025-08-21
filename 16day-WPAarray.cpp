/*
#include<iostream>
using namespace std;

int main()
{
    char arr[4]={'1','4','7','9'};
    //int sum=arr[0]+arr[1]+arr[2]+arr[3];
    //cout<<sum<<endl;

    int add=0;
    for(int i=0;i<4;i++)
    {
        int x=arr[i]-48;
        cout<<x<<endl;
        add=add+x;
    }
    cout<<"sum="<<add<<endl;
    return 0;
}
*/


//do while loop

/*
#include<iostream>
using namespace std;

int main()
{
    int i=1;
    do
    {
        cout<<"Hello="<<i<<endl;
        i++;
    }
    while(i<=10);
    return 0;
}
*/

//WPA to find all the aaski value of a to z charactar?

/*
#include<iostream>
using namespace std;

int main()
{
    char x='a',y='z';
    for(int i=x;i<=y;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}
*/

//if we want in even no.


/*
#include<iostream>
using namespace std;

int main()
{
    char x='a',y='z';
    for(int i=x;i<=y;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
*/

//sort array in assending order

#include<iostream>
using namespace std;

int main()
{
    //int arr[5]={24,56,4,58,23};
    int n;
    cout<<"no. of arr="<<endl;
    cin>>n;
    cout<<"Enter the no."<<endl;
    int arr[n];
    for(int x=0;x<n;x++)
    {
        int data;
        cin>>data;
        arr[x]=data;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>=arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int k:arr)
            {
                cout<<k<<endl;
            }
    return 0;
}
