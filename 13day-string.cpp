//reverse of string
/*
#include<iostream>
using namespace std;
 int main()
 {
     string str = "hello";
     cout<<sizeof str <<endl;
     string rev = " ";
     for(char ch:str)
     {
         rev=ch+rev;
     }
     cout<<rev;
     return 0;
 }
*/

#include<iostream>
using namespace std;
 int main()
 {
     string str = "hello world";
     cout<<str.size()<<endl;
     cout<<str<<endl;
     string strl;
     cout<<"Input the string"<<endl;
     //cin>>strl;
     getline(cin,strl);
     int wcnt=0;
     for(int i=0;i<strl.size();i++)
     {
         if(str[i]==' ')
            wcnt++;
     }
     cout<<"White Space="<<wcnt<<endl;
     return 0;
 }
