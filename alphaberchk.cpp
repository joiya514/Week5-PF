#include <iostream>
using namespace std;
char alphabet;
void ch();
main(){
cout << "Enter alphabet: ";
cin >> alphabet;

ch();

}
void ch(){
if(alphabet >= 'A' && alphabet <= 'Z'){
cout << alphabet << " is upper case.";

}
if(alphabet >= 'a' && alphabet <= 'z'){

    cout << alphabet << " is lower case.";
}


}