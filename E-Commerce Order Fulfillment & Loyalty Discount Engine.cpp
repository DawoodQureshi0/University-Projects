/*first we take(input) name,total subtotal,vipstat(we will use it inside condition) and miles
if subtotal >150 OR vipstat is Yes then apply 15 percent discount with variable discount = subtotal * 0.15
shipping fee will be free if the discounted subtotal is > 100 else 12.25 + 0.25 per miles (miles * 0.25)
calculate total bill with subtotal - discount + shipping fee
print Subtotal, saving if any, shipping fee, grand total*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

double discount(double subtotal)
{
    return subtotal * 0.15;
}

int main()
{
    char vipstat;       //Inputs and Intialization
    string name;
    double subtotal, miles, finalTotal, Discount, shippingfee;
    bool status;

    cout<<"Enter Your Name:";
    getline(cin,name);
    cout<<"Enter Your Cart Subtotal: ";
    cin>>subtotal;
    cout<<"Enter Miles: ";
    cin>>miles;
    cout<<"Your Vip Status (Y/N): ";
    cin>>vipstat;

    if(vipstat == 'Y' || vipstat == 'y')
    {
        status = true;
    }
    else
    {
        status = false;
    }

    if(subtotal > 150 || status == true)
    {
        Discount = discount(subtotal);
    }
    else
    {
        Discount = 0;
    }
    double discountedSubtotal = subtotal - Discount;

    if(discountedSubtotal > 100)
    {
        shippingfee = 0;
    }
    else
    {
        shippingfee = 12.50 + (miles * 0.25);
    }

    finalTotal = discountedSubtotal + shippingfee;

    cout<<fixed<<setprecision(2);
    cout<<left<<setw(20)<<"Name"<<setw(15)<<"Subtotal"<<setw(15)<<"Savings"<<setw(20)<<"Shipping Fee"<<right<<setw(20)<<"Total Bill"<<"\n";
    cout<<left<<setw(20)<<name<<setw(15)<<subtotal<<setw(15)<<Discount<<setw(20)<<shippingfee<<right<<setw(20)<<finalTotal;
}
