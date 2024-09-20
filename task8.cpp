#include <iostream>
using namespace std;
main(){
cout<<"enter voltage (in volts)";
float v;
cin>> v;

cout<<"enter current (in amperes)";
float i;
cin>> i;

float power;
power = v*i;
cout<<"The power is " << power <<" watts.";
}