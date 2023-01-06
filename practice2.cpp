#include <iostream>
#include <cmath>
using namespace std;
int base;
float hyp;
float height;
float degrees;
  float calculateh();


main(){
cout << "Enter angle in degress: ";
cin >> degrees;
cout << "Enter base value: ";
cin >> base;
 calculateh();
 }
 float calculateh(){
hyp = base / cos(degrees * 3.14 / 180);
height = sin(degrees * 3.14 / 180) * hyp;
cout << "Height is: " << height << endl;


}