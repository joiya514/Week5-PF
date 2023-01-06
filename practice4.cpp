#include <iostream>
#include <cmath>
using namespace std;
int number;
int number1 = number / 10;
int number2 = number1 / 10;


int num1;
int num2;
int num3;
bool eveno();



main(){
system("cls");
while(true){
 cout << "Enter a 3 digit number: ";
 cin >> number;

  eveno();
}
}

   bool eveno(){
number1 = number / 10;
number2 = number1 / 10;


 num1 = number % 10;
 num2 = number1 % 10;
 num3 = number2 % 10;
   if(num1 == num3){

 cout << "True" << endl;
}
 if(num1 != num3){
   cout << "False" << endl;
}

}