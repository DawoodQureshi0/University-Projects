/*first we input std full name, attempted credit hours, marks of three courses(P,M,Ps)
calculate percentage = +++/3 then calculate gpa = percent/100 * 4.0
if Credit hrs >= 12 && gpa >= 3.5 && marks(individ) < 70 then eligible(use if boolean)
print marks, gpa , percentage , honor Roll status*/

#include<iostream>
#include<string>
#include<iomanip>
 
using namespace std;

double percentage(double x,double y, double z)
{
    return (x+y+z) / 3;
}
double gpa(double percent)
{
    return (percent/100) * 4;
}

string pEligibility(bool eligiblity)
{
    if(eligiblity == true)
    {
        return "Eligible";
    }
    else
    {
        return "Not Eligible";
    }
}

int main()
{
    double programming,maths,physics;
    int creditHours;
    string name;
    bool eligibility;

    cout<<"Enter Your Name :";
    getline(cin,name);
    cout<<"Enter Marks Attained in Programming Course: ";
    cin>>programming;
    cout<<"Enter Marks Attained in Maths Course: ";
    cin>>maths;
    cout<<"Enter Marks Attained in Phyiscs Course: ";
    cin>>physics;
    cout<<"Enter Attempted Credit Hours: ";
    cin>>creditHours;

    double coursemarks = programming + maths + physics;

    double Percentage = percentage(programming,maths,physics);
    double Gpa = gpa(Percentage);

    if(creditHours >= 12 && Gpa >=3.5 && maths >= 70 && programming >= 70 && physics >= 70)
    {
        eligibility = true;
    }
    else
    {
        eligibility = false;
    }
    string printEligibility = pEligibility(eligibility);

    cout<<fixed<<setprecision(2);
cout<<left<<setw(12)<<"Programming"<<setw(12)<<"Mathematics"<<setw(12)<<"Physics"<<setw(10)<<"Total"<<setw(10)<<"GPA"<<setw(15)<<"Percentage"<<setw(20)<<"Honor Roll Status"<<"\n";
cout<<left<<setw(12)<<programming<<setw(12)<<maths<<setw(12)<<physics<<setw(10)<<coursemarks<<setw(10)<<Gpa<<setw(15)<<Percentage<<setw(20)<<printEligibility;

}