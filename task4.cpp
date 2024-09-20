#include <iostream>
using namespace std;
main(){
float charge;
cout <<"enter the charge(Q) in coulumbs:";
cin >> charge ;


float time;
cout<< "enter the time(t) in seconds:";
cin>> time;

float current;
current = charge/time ;

cout<<" The current (I) is" << current <<" amperes" ;
}
