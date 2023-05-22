// This program will be used for practical use of "if else"

#include<bits/stdc++.h>
using namespace std;

// Exercise No - 01 -------------------------------------------------------------------
void positive_or_negative() {
    
    cout << "The program can check if a number is positive, negative, or zero" << endl;

    int x;
    cout << "Enter number: ";
    cin >> x;

    if(x>0) {
        cout << x << " is positve" << endl; 
    }
    else if(x<0) {
        cout << x << " is negative" << endl;
    }
    else {
        cout << x << " is zero" << endl;
    }
}

// Exercise No - 02 ---------------------------------------------------------------------
void maximum() {    
    
    cout << "The program can calculate 'Maximum number' from two number" << endl;
    
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    if(a > b) {
        cout << a << " is Maximum" << endl;
    }
    else if(b > a) {
        cout << b << " is Maximum" << endl;
    }
    else {
        cout << a << " and " << b << " is equal" << endl;
    }
}

//Exercise No - 03 ----------------------------------------------------------------------
void minimum() {    
    
    cout << "The program can calculate 'Minimum number' from two number" << endl;
    
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    if(a < b) {
        cout << a << " is Minimum" << endl;
    }
    else if(b < a) {
        cout << b << " is Minimum" << endl;
    }
    else {
    cout << a << " and " << b << " is equal" << endl; 
    }
}

//Exercise No - 04 ----------------------------------------------------------------------
void leap_year() {
    cout << "The program can find out it's input is leap year or not" << endl;
    int number;
    cout << "Give input: ";
    cin >> number;

    if(number % 400 == 0) {
        cout << number << " is leap year. " << endl;
    }
    else if(number % 4 == 0 && number % 100 != 0) {
        cout << number << " is leap year. " << endl;
    }
    else {
        cout << number << " is not leap year. " << endl;
    }
}

//Exercise No - 04 ----------------------------------------------------------------------


int main() {

    cout << "Exercise no - 01" << endl;
    positive_or_negative();
    
    cout << "\n Exercise no - 02" << endl;
    maximum();

    cout << "\n Exercise no - 03" << endl;
    minimum();

    cout << "\n Exercise no - 04" << endl;
    leap_year();


    return 0;
}