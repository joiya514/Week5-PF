#include <iostream>
using namespace std;
void number();
int digit;
main(){

cout << "Enter a digit no (except 11 - 19): ";
cin >> digit;
number();

}
void number(){
if(digit >= 0 &&  digit <= 99){
cout << digit;

}


}