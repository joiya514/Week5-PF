#include <iostream>
#include <cmath>
using namespace std;
 int summ();
int sum;
int number;




main(){
while(true){

cout << "Enter five digit number: ";
cin >> number;

summ();
}
}

int summ(){

int num1 = number / 10;
int num2 = num1 / 10;
int num3 = num2 / 10;
int num4 = num3 / 10;
int number1 = number % 10;
int number2 = num1 % 10;
int number3 = num2 % 10;
int number4 = num3 % 10;
int number5 = num4 % 10;
int modulos;


 sum = (number1 + number2 + number3 + number4 + number5);
 modulos = sum % 2;
 if(modulos == 0){
 cout << "Evenish" << endl;
}
 if(modulos != 0){
  cout << "Oddish" << endl;
}


}