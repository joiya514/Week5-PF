#include <iostream>
using namespace std;
void tax();
char code;
int price;
float taxAmount;

main(){
cout << "Enter item price: ";
cin >> price;
cout << "Enter code of vehicle: ";
cin >> code;

tax();

}
void tax(){
if(code == 'M'){
    cout << "Final price is " << price + (price * 0.06);

}
if(code == 'E'){
    cout << "Final price is " << price + (price * 0.08);
    
}
if(code == 'S'){
    cout << "Final price is " << price + (price * 0.1);
    
}
if(code == 'V'){
    cout << "Final price is " << price + (price * 0.12);
    
}
if(code == 'T'){
    cout << "Tax is " << price + (price * 0.14);
    
}


}