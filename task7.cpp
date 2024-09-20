#include <iostream>
using namespace std;
main(){
cout<<"Enter the number of hours:";
float hrs;
cin>> hrs;

float min;
min = hrs*60;

float sec;
sec = min*60;


cout<< hrs << "hours is equivalent to " << sec <<"seconds.";

}