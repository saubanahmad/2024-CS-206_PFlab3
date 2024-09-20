#include <iostream>
using namespace std;
main(){

string name;
cout<<"enter the student's name:";
cin>> name;

cout<<"enter matriculation marks(out of 1100):";
float marksm;
cin>> marksm;

cout<<"enter intermediate marks(out of 550):";
float marksf;
cin>> marksf;

cout<<"enter ecat marks (out of 400)";
float markse;
cin>> markse;

float aggregate;
aggregate = 10*marksm/1100 + 50*markse/400 + 40*marksf/570 ;

cout<<"aggregate score for " << name <<" is "<< aggregate<<"%";

}