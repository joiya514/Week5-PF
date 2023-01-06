practice3.exe
#include <iostream>
#include <cmath>
using namespace std;
float a;
float b;
float c;
float negB;
float sqrB;
float neg4ac;
float sqrut;
float nomp;
float formp;
double quadratic();


main(){
system("cls");
while(true){
cout << "Enter value of a: ";
cin >> a;
cout << "Enter value of b: ";
cin >> b;
cout << "Enter value of c: ";
cin >> c;

quadratic();
}
}
  double quadratic(){
 
  negB = -1 * b;
  sqrB = pow(b, 2);
  neg4ac = - (4 * a * c);
  sqrut = sqrt(sqrB + neg4ac);
  nomp = negB + sqrut;
  formp = nomp / (2 * a);

  cout << "Positive solution is: " << formp << endl;
}