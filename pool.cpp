#include <iostream>
using namespace std;
int volume;
int p1;
int p2;
float pp1;
float pp2;
float hour;
void fill();

main()
{
    cout << "Enter volume of pool in litres: ";
    cin >> volume;
    cout << "Enter flow rate of pipe 1: ";
    cin >> p1;
    cout << "Enter flow rate of pipe 2: ";
    cin >> p2;
    cout << "Enter time in hours the worker was absent: ";
    cin >> hour;

    fill();
}
void fill()
{

    pp1 = hour * p1;
    pp2 = hour * p2;
    float sum = pp1 + pp2;
    if(sum < volume){
    cout << "Water filled in " << hour << " hours is " << sum;
}
if(sum == volume){

    cout << "Pool is filled.";
}
if(sum > volume){
    cout << "pool overflown by " << sum - volume << " litres";
}
}