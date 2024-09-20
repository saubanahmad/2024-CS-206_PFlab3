//task1
#include <iostream>
using namespace std;
main(){
string name;
cout<<"Enter your name: ";
cin >> name;

int roll_no;
cout<<"Enter your Roll number: ";
cin>> roll_no ;

float aggregate;
cout<< "Enter your aggregate: ";
cin>> aggregate;

char section;
cout<<"Enter your section:";
cin>> section;

cout<< "Name:"<< name  << endl; 
cout<< "Roll Number:" <<roll_no << endl;
cout<< "Aggregate:" <<aggregate << endl;
cout<< "Your section :" << section << endl;


}
//task2
#include <iostream>
using namespace std;
main(){
cout<<" enter weight in pounds: " << endl; 
float kilogram = 0.45;

float inputvalue;
cin >> inputvalue;
cout << "1lb=" << kilogram << "kg" << endl;
float convertedvalue;
convertedvalue = kilogram * inputvalue;
cout<< inputvalue <<" pounds is equal to "<<convertedvalue << " kilograms";

}
//task3
#include <iostream>
using namespace std;
main(){

int len;
cout <<"enter the length of the rectangle";
cin >> len ;


int br;
cout<< "enter the breath of rectangle";
cin>> br;

int area;
area = len * br;

cout<<" the area of the rectangle is: " << area ;
}
//task4
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
//task5
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
//task6
#include <iostream>
using namespace std;
main(){
cout<<"Enter the size in megabytes (MB)";
float MB;
cin>> MB;

float kb;
kb = MB*1024;

float bytes;
bytes = kb*1024;

float bits;
bits = bytes*8;

cout<< MB << "MB is equivalent to " << bits <<"bits.";

 
}
//task7
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
//task8
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
//task9
#include <iostream>
using namespace std;
main(){
cout<<"enter your age in years:";
float yrs;
cin>> yrs;

float days;
days = yrs*365;



cout<< "your age in days is approximately" << days <<"days.";

}
//task10
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
//task11
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












