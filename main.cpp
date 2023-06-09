#include <iostream>
using namespace std;

// Create functions "min" and "max"
// Both take in 2 doubles
// Return the min or max of each

double min(double num1, double num2){ // Function for finding minimum

    double minNum = 0;

    if(num1 == num2){
        throw "The numbers are equal"; // Throwing if there is no minimum due to numbers being equal
    }

    if(num1 < num2){ // Seeing which number is the minimum
        minNum = num1;
    } else if(num2 < num1){
        minNum = num2;
    }

    return minNum;

}

double max(double num1, double num2){ // Function for finding maximum

    double maxNum = 0;

    if(num1 == num2){
        throw "The numbers are equal"; // Throwing if there is no maximum due to numbers being equal
    }

    if(num1 > num2){ // Seeing which number is the maximum
        maxNum = num1;
    } else if(num2 > num1){
        maxNum = num2;
    }
    return maxNum;
}

int main(){

    double num1, num2;

    cout << "Enter a number: "; // Getting numbers from user for minimum function
    cin >> num1;

    cout << "Enter another number: ";
    cin >> num2;

    try{
        cout << min(num1, num2);
    }
    catch(const char* exception){ // Creating catch for the char* that I am throwing
        cout << "Exception: " << exception << endl;
    }

    cout << endl; // Creating new line for the upcoming maximum function
    cout << "Now we will find maximum numbers" << endl;
    cout << "Enter a number: "; // Getting numbers from user for maximum function
    cin >> num1;

    cout << "Enter another number: ";
    cin >> num2;

    try{
        cout << max(num1, num2);
    }
    catch(const char* exception){
        cout << "Exception: " << exception << endl;
    }



    return 0;
}