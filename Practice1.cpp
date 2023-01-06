#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
float division(int num1, int num2);

main(){
  system("cls");
float num1;
float num2;
float result;
 cout << "Enter 1st number(decimal number): ";
 cin >> num1;
 cout << "Enter 2nd number(decimal number): ";
 cin >> num2;
 result = max(num1, num2);
 cout << "greater is: " << result << endl;
 result = min(num1, num2);
 cout << "smaller is: " << result << endl;
 result = pow(num1, num2);
 cout << "power is: " << result << endl;
 result = cbrt(num1);
 cout << "Cube root of first number is: " << result << endl;
 result = ceil(num1);
 cout << "Next number of first  number is: " << result << endl;
 result = floor(num1);
 cout << "Previous number of first number is: " << result << endl;


  }


float division(int num1, int num2){

float result = num1 / num2;
return result;
}