/*first we take Vin code, total distance , fuel consumed (gallons), total time (sec)
avg speed =? Distance / total time , fuel economy = total distance / gallons,
print (hh:mm:ss), avg speed , mpg (2 decimal) we will use fixed

((hrs = total seconds / 3600
remaining seconds = total seconds % 3600
min = remain secs / 60
secs = remain secs % 60))*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main ()
{
    string vincode;
    double distance, fuelEconomy, avgSpeed, gallons;
    int hour, minutes, seconds;  //input and intialization
    int time;
    cout<<"Enter VinCode: ";
    getline(cin,vincode);
    cout<<"Enter Total Distance Travelled : ";
    cin>>distance;
    cout<<"Enter Fuel Consumed: ";
    cin>>gallons;
    cout<<"Time in Seconds: ";
    cin>>time;

    //calculations
    hour = time / 3600; //To get Time in hours
    int remainingSeconds = time % 3600;  //remaining hours
    minutes = remainingSeconds / 60;  //to get minutes
    seconds = remainingSeconds % 60;  //to get seconds

    avgSpeed = distance / (time / 3600.0);
    fuelEconomy = distance / gallons;
    //output
    cout<<left<<setw(20)<<"Time"<<setw(15)<<"Average Speed"<<right<<setw(20)<<"Miles Per Gallon"<<"\n";
    cout<<left<<setw(2)<<hour<<":"<<setw(2)<<minutes<<":"<<setw(2)<<seconds<<right<<fixed<<setprecision(2)<<setw(20)<<avgSpeed<<setw(20)<<fuelEconomy;

}
