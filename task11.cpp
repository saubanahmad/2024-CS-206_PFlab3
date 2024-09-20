#include <iostream>
using namespace std;
main(){
cout<< "enter the current world population: ";
float popn;
cin>> popn;

cout<< "enter the monthly birth rate(number of births per month)";
float br ;
cin>> br;
 
float bry;
bry= br*12;

float popt;
popt = popn+ 30*bry;
cout<<" the population in  three decades will be:"<<popt;
 
}