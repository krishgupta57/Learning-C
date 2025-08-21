#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<sizeof arr<<endl;
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<s<<endl;
    int add=0;
    for(int i=0;i<s;i++)
    {
        //cout <<arr[i]<<endl;
        add=add+arr[i];
    }
    cout<<add<<endl;
    return 0;
}
