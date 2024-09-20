#include <iostream>
using namespace std;
main(){
cout<<"enter the name of the cricket team:";
string name;
cin>> name;


cout<<"enter the no of wins ";
int wins;
cin>> wins;

cout<<"enter the no of loses ";
int los;
cin>> los;

cout<<"enter the no of draws";
int drw;
cin>> drw;

int points;
points = 3*wins + 1*drw + 0*los;



cout<< name << " has obtained " <<points <<" in asia cup";
 

}