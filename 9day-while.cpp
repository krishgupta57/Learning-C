#include<iostream>
using namespace std;

int main()
{
    while(true)
    {
        cout<<"Enter your choice"<<endl;
        int ch;
        cin>>ch;
        if(ch==1)
        {
            cout<<"choice 1 pelendrom"<<endl;
            int n,ans=0,m;
            cout<<"Enter the number="<<endl;
            cin>>n;
            m=n;
            //n<=0?(cout"negative or zero"):(cout<<"yes");
            if(n<=0) cout<<"Invalid number"<<endl;
            else
            {
                while(n>0)
                {
                    int r=n%10;
                    ans=ans*10+r;
                    n=n/10;
                }
                if(m==ans) cout<<"pelendrom"<<endl;
                else cout<<"not pelendrom"<<endl;
            }
        }
        else if(ch==2)
        {
            cout<<"choice 2 reverse"<<endl;
            int n,ans=0;
            cout<<"Enter the number="<<endl;
            cin>>n;
            //n<=0?(cout"negative or zero"):(cout<<"yes");
            if(n<=0) cout<<"Invalid number"<<endl;
            else
            {
                while(n>0)
                {
                    int r=n%10;
                    ans=ans*10+r;
                    n=n/10;
                }
                cout<<"reverse ="<<ans<<endl;
            }
        }
        else if(ch==3) cout<<"choice 3"<<endl;
        else if(ch==4) break;
        else cout<<"wrong choice"<<endl;
    }

    return 0;
}
