//
//  main.cpp
//  expressions
//
//  Created by Dan Klos on 10/25/16.
//  Copyright © 2016 Dan Klos. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    //Exercise 1
    
//    int userA;
//    int userB;

//    cout << "Enter the age of User A." << "\n";
//    cin >> userA;
//    cout << "Enter the age of User B." << "\n";
//    cin >> userB;
//    
//    if (userA > 100 && userB > 100)
//    {
//        cout << "Behave differently" << "\n";
//    }
//    else if (userA > userB)
//    {
//        cout << "User A is older." << "\n";
//    }
//    else if (userB > userA)
//    {
//        cout << "User B is older." << "\n";
//    }
//    else
//    {
//        cout << "They are the same age" << "\n";
//    }
    
    //Exercise 2
//    int viablePW1 = 123;
//    int viablePW2 = 234;
//    int userPW;
//    
//    cout << "Enter your password" << "\n";
//    cin >> userPW;
//    
//    if (userPW == viablePW1 || userPW == viablePW2)
//    {
//        cout << "Valid password." << "\n";
//    }
//    else
//    {
//        cout << "Invalid password." << "\n";
//    }
    
    //Exercise 3
//    char inputOperator;
//    int firstNum;
//    int secondNum;
//    
//    cout << "Give me an operator, babay" << "\n";
//    cin >> inputOperator;
//    
//    cout << "Give me the first number, babay" << "\n";
//    cin >> firstNum;
//    
//    cout << "Give me the second number, babay" << "\n";
//    cin >> secondNum;
//    
//    if (inputOperator == '+')
//    {
//        cout << firstNum + secondNum << "\n";
//    }
//    else if (inputOperator == '-')
//    {
//        cout << firstNum - secondNum << "\n";
//    }
//    else if (inputOperator == '*')
//    {
//        cout << firstNum * secondNum << "\n";
//    }
//    else if (inputOperator == '/')
//    {
//        cout << firstNum * secondNum << "\n";
//    }
//    else
//    {
//        cout << "Invalid operator." << "\n";
//    }
    
    //Exercise 4
    
    
    string username1 = "username1";
    string username2 = "username2";
    string username3 = "username3";
    string inputUsername;

    int username1Password = 123;
    int username2Password = 234;
    int username3Password = 345;
    int inputUserPassword;
    
    int loginAttempts = 0;
    
    while (loginAttempts < 2)
    {
        cout << "Enter your username" << "\n";
        cin >> inputUsername;
        
        cout << "Enter your password" << "\n";
        cin >> inputUserPassword;
        
        if (inputUsername == username1 && inputUserPassword == username1Password)
        {
            cout << "Welcome, username1!" << "\n";
            return 0;
        }
        else if (inputUsername == username2 && inputUserPassword == username2Password)
        {
            cout << "Welcome, username2!" << "\n";
            return 0;
        }
        else if (inputUsername == username3 && inputUserPassword == username3Password)
        {
            cout << "Welcome, username3!" << "\n";
            return 0;
        }
        else
        {
            cout << "Username and password do not match" << "/n";
            loginAttempts++;
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
