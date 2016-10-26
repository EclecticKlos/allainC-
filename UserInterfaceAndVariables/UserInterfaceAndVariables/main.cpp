//
//  main.cpp
//  UserInterfaceAndVariables
//
//  Created by Dan Klos on 10/15/16.
//  Copyright © 2016 Dan Klos. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    double userInputNum1 = 0;
    double userInputNum2 = 0;
    
    cout << "Please enter your first number" "\n";
    cin >> userInputNum1;
    cout << "Please enter your second number" "\n";
    cin >> userInputNum2;
    
    double result = userInputNum1 / userInputNum2;
    
    cout << "You entered: " << result << "\n";
}
