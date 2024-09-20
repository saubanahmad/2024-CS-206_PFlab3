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