#include <iostream>
using namespace std;
void hours();

int hour;
int mint;
main(){
cout << "Enter hours: ";
cin >> hour;
cout << "Enter minutes";
cin >> mint;

hours();

}
void hours(){

if(mint <= 44 && hour <= 23){

    cout << hour <<"Hours" << mint + 15 << "minutes";
}
if(mint == 45 && hour < 23){
    
cout << hour + 1 <<"Hours" << 0 << "minutes";
}

if(mint ==46){
    mint == 1;
}
if(mint > 45 && hour < 23){
    
    cout << hour + 1 << "hours" << mint + 15 << "minutes";
 
}
}

