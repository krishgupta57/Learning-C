//Marksheet

#include<iostream>
using namespace std;
int main()
{
    int p,c,m,per,total_marks;
    cout<<"Enter the phy marks="<<endl;
    cin>>p;
    cout<<"Enter the chem marks="<<endl;
    cin>>c;
    cout<<"Enter the math marks="<<endl;
    cin>>m;

    total_marks=p+c+m;
    per=total_marks/3;

    if(p<0 or c<0 or m<0 or p>100 or c>100 or m>100)
    {
        cout<<"Invalid Marks"<<endl;
        cout<<"phy="<<p<<"  "<<"chem="<<c<<"  "<<"math="<<m<<endl;
    }
    else if((p<33 and c>=33 and m>=33)or(p>=33 and c<33 and m>=33)or(p>=33 and c>=33 and m<33))
    {
        if(p<33 and c>=33 and m>=33)
        {
            cout<<"Fail in phy"<<endl;
            cout<<"phy="<<p<<"  "<<"chem"<<c<<"  "<<"math"<<m<<"  "<<"Total marks"<<total_marks<<"  "<<"per="<<per<<endl;
        }
        else if(p>=33 and c<33 and m>=33)
        {
            cout<<"Fail in chem"<<endl;
            cout<<"phy="<<p<<"  "<<"chem"<<c<<"  "<<"math"<<m<<"  "<<"Total marks"<<total_marks<<"  "<<"per="<<per<<endl;
        }
        else
        {
            cout<<"Fail in math"<<endl;
            cout<<"phy="<<p<<"  "<<"chem"<<c<<"  "<<"math"<<m<<"  "<<"Total marks"<<total_marks<<"  "<<"per="<<per<<endl;
        }

    }
        else if((p<33 and c<33 and m>=33) or (p>=33 and c<33 and m<33) or (p<33 and c>=33 and m<33))
    {
        if(p<33 and c<33 and m>=33)
        {
            cout<<"Fail in phy and chem"<<endl;
            cout<<"phy="<<p<<"  "<<"chem"<<c<<"  "<<"math"<<m<<"  "<<"Total marks"<<total_marks<<"  "<<"per="<<per<<endl;
        }
        else if(p>=33 and c<33 and m<33)
        {
            cout<<"Fail in chem and math"<<endl;
            cout<<"phy="<<p<<"  "<<"chem"<<c<<"  "<<"math"<<m<<"  "<<"Total marks"<<total_marks<<"  "<<"per="<<per<<endl;
        }
        else
        {
            cout<<"Fail in math and phy"<<endl;
            cout<<"phy="<<p<<"  "<<"chem"<<c<<"  "<<"math"<<m<<"  "<<"Total marks"<<total_marks<<"  "<<"per="<<per<<endl;
        }
    }

    else if(p<33 and c<33 and m<33)
    {
        cout<<"Fail in all subject"<<endl;
        cout<<"phy="<<p<<"  "<<"chem"<<c<<"  "<<"math"<<m<<"  "<<"Total marks"<<total_marks<<"  "<<"per="<<per<<endl;
    }

    else
    {
        if(per<=45)
        {
            cout<<"3rd Division"<<endl;
            cout<<"phy="<<p<<"  "<<"chem"<<c<<"  "<<"math"<<m<<"  "<<"Total marks"<<total_marks<<"  "<<"per="<<per<<endl;
        }
        else if(per<60)
        {
            cout<<"2nd Division"<<endl;
            cout<<"phy="<<p<<"  "<<"chem"<<c<<"  "<<"math"<<m<<"  "<<"Total marks"<<total_marks<<"  "<<"per="<<per<<endl;
        }
        else
        {
            cout<<"1st Division"<<endl;
            cout<<"phy="<<p<<"  "<<"chem"<<c<<"  "<<"math"<<m<<"  "<<"Total marks"<<total_marks<<"  "<<"per="<<per<<endl;
        }
    }

    return 0;
}
