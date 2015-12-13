//
//  intro.cpp
//  FinalProject
//
//  Created by Michael Montella on 12/9/15.
//  Copyright © 2015 Michael Montella. All rights reserved.
//

#include <iostream>
#include "declarations.h"

using namespace std;

void declarations::introduction() {
  
    while (declarations::success == false) {
        cout << "Select a mode of transportation" << endl;
        cout << endl;
        cout << "1. Bike" << endl;
        cout << "2. Car" << endl;
        cout << "3. Foot" << endl;
        cin >> declarations::transport;
        cout << endl;
        if (declarations::transport == "3" || declarations::transport == "Foot") { // User input for transportation
            declarations::transport = "Foot";
            declarations::success = true;
        } else if (declarations::transport == "2" || declarations::transport == "Car") {
            declarations::transport = "Car";
            declarations::success = true;
        } else if (declarations::transport == "1" || declarations::transport == "Bike") {
            declarations::transport = "Bike";
            declarations::success = true;
        } else {
            cout << "Invalid option.  Pick Again" << endl;
            cout << endl;
        }
    }
    
    while (declarations::success2 == false) {
        cout << "Select a year:" << endl;
        cout << "1. 2012" << endl;
        cout << "2. 2013" << endl;
        cout << "3. 2014" << endl;
        cin >> declarations::year;
        cout << endl;
        if (declarations::year == "1" || declarations::year == "2012") { // User input for year
            declarations::year = "2012";
            declarations::success2 = true;
        } else if (declarations::year == "2" || declarations::year == "2013") {
            declarations::year = "2013";
            declarations::success2 = true;
        } else if (declarations::year == "3" || declarations::year == "2014") {
            declarations::year = "2014";
            declarations::success2 = true;
        } else {
            cout << "Invalid Option.  Pick Again" << endl;
            cout << endl;
        }
    }
    
    //cout << declarations::transport << " " << declarations::year << endl;
    
}

// This function is called if user wants to run program again
// It resets the booleans so that the while loop will run
void declarations::reset() {
  declarations::success = false;
  declarations::success2 = false;
}

int declarations::transportNumber() { // Determines the mode of transport the user wants
  if (declarations::transport == "Bike") {
    return 1;
  } else if (declarations::transport == "Car") {
    return 2;
  } else {
    return 3;
  }
}

int declarations::yearSelect() {
  if (declarations::year == "2012") {
    return 2012;
  } else if (declarations::year == "2013") {
    return 2013;
  } else {
    return 2014;
  }
}
