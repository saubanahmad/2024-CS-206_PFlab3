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
