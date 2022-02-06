#include <iostream>
using namespace std;

int main(void){

    int year;
    cout << "Enter the year to check: ";
    cin>>year;

    if (year % 4 == 0 and year % 100 != 0){
        cout << year << " is a leap year.🥳";
    }

    else if (year % 400 == 0){
        cout<<"leap year.😍";
    }
    
    else{
        cout<<"not a leap year.😒";
    }
return 0;
}