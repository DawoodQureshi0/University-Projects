/*First we take acc id, name,total water consumption
then find subtotal= base fee + water use cost , tax = subtotal * 0.075. total bill = subtotal + tax
print id, total use, service fee, tax and total bill*/

#include<iostream> //header Files
#include<string>
#include<iomanip>
using namespace std;

int main() //main function
{
    //initialize
    int id;
    string name;
    double totalWaterConsumption,baseFee = 25.00, subtotal,tax,totalBill;

    //input
    cout<<"Enter your ID:";
    cin>>id;
    cin.ignore(100,'\n');
    cout<<"Enter your Name:";
    getline(cin,name);
    cout<<"Consumption of Water:";
    cin>>totalWaterConsumption;

    //proccess
    if(totalWaterConsumption <= 1000) //condition //calculating subtotal
    {
        subtotal = (totalWaterConsumption * 0.005) + baseFee;
    }
    else
    {
        subtotal = (1000 * 0.005) + ((totalWaterConsumption - 1000) * 0.008) + baseFee;
    }

    tax = subtotal * 0.075; // calculating tax

    totalBill = subtotal + tax; // calculating total bill

    cout<<fixed<<setprecision(2);
    cout<<left<<setw(10)<<"ID"<<setw(20)<<"Name"<<setw(30)<<"total Water Consumption"<<setw(20)<<"Tax Amount"<<right<<setw(15)<<"Total Bill"<<"\n";
    cout<<left<<setw(10)<<id<<setw(20)<<name<<setw(30)<<totalWaterConsumption<<setw(20)<<tax<<right<<setw(15)<<totalBill<<"\n";
}
