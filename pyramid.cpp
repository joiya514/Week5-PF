#include <iostream>
using namespace std;
void volume();
float length;
float width;
float height;
string unit;


main(){
cout << "Enter lenght: ";
cin >> length;
cout << "Enter width: ";
cin >> width;
cout << "Enter height: ";
cin >> height;
cout << "In which unit volume to be measured(metres/centimetres/millimetres/kilometres): ";
cin >> unit;
volume();

}
void volume(){
  if(unit == "metres"){
cout << "volume is " << length * height * width << " metres cube";

  }
  if(unit == "centimetres"){
    cout << "volume is: " << length * width * height * 1000000 << " centimetres cube";
  }
  if(unit == "millimetres"){
    cout << "volume is: " << length * width * height * 1000000000 << " millimetres cube";
  }
  if(unit == "kilometres"){
    cout << "volume is: " << length * width * height / 1000000000 << " kilometres cube";
  }


}