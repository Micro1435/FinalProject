//
//  main.cpp
//  FinalProject
//
//  Created by Michael Montella on 12/9/15.
//  Copyright © 2015 Michael Montella. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "declarations.h"
using namespace std;

int main() {
    bool repeat = true;
    cout << endl;
    cout << "Welcome. This program shows how many pickups there were by certain transportation during a year." << endl;
    cout << endl;
    while (repeat == true) {
      declarations intro;
      intro.introduction(); // Displays the transportation and year for the user to pick
    
      ifstream inFile;
      inFile.open("donationDataFixed.csv"); // Opens the csv file
      if (inFile.good()) {
        //cout << "File Opened daaaawwwwgggg" << endl;
	string csvData;
	
	//int pickups = 0;
	int lineCounter = 0;

        string totalTransport[10590]; // Used to store the value of all the transport data  
          
	while(getline(inFile, csvData)) {

	  stringstream ss(csvData);
	  string temp;
	  int counter = 0;
	  lineCounter++;
	  while (getline(ss, temp, ',')) {

	    if (counter == 6) { // Inserts values into the array
	      if (temp == "Bike") {
	        totalTransport[lineCounter] = "Bike";
	      } else if (temp == "Car") {
	        totalTransport[lineCounter] = "Car";
	      } else if (temp == "Foot") {
	        totalTransport[lineCounter] = "Foot";
	      } else {
	        totalTransport[lineCounter] = "nil";
	      }
	    }
	    counter++;
	  } 	  
	}

	int bikeCount = 0;
	int carCount = 0;
	int footCount = 0;
	
	if (intro.yearSelect() == 2012) { // Determines how many pickups there are in each year
	  for (int i = 0; i <= 2087; i++) {
            if (totalTransport[i] == "Bike") {
                bikeCount++;
            } else if (totalTransport[i] == "Car") {
                carCount++;
            } else if (totalTransport[i] == "Foot") {
                footCount++;
            }
	  }
	} else if (intro.yearSelect() == 2013) {
	  for (int i = 2088; i <= 6576; i++) {
            if (totalTransport[i] == "Bike") {
                bikeCount++;
            } else if (totalTransport[i] == "Car") {
                carCount++;
            } else if (totalTransport[i] == "Foot") {
                footCount++;
            }
	  }
	} else if (intro.yearSelect() == 2014) {
	  for (int i = 6577; i <= 10590; i++) {
            if (totalTransport[i] == "Bike") {
                bikeCount++;
            } else if (totalTransport[i] == "Car") {
                carCount++;
            } else if (totalTransport[i] == "Foot") {
                footCount++;
            }
	  }
	}

	//cout << totalTransport[2] << endl;
	//cout << "Total Lines " << lineCounter <<  endl;
       
	if (intro.transportNumber() == 1) { // Determines which mode of transportation the user wants
	  cout << "There were " << bikeCount << " pickups by Bike in " << intro.yearSelect() << endl;
	} else if (intro.transportNumber() == 2) {
	  cout << "There were " << carCount << " pickups by Car in " << intro.yearSelect() << endl;
	} else {
	  cout << "There were " << footCount << " pickups by Foot in " << intro.yearSelect() << endl;
	}

	//cout << "It worked duuuuude" << endl;
	
    }
      string response;
      cout << endl;
      cout << "Would you like to go again y or n?" << endl;
      cin >> response;

      if (response == "y" ) { // Checks to see if the user wants to run the program again
	repeat = true;
	intro.reset();
	cout << endl;
      } else {
	repeat = false;
	cout << endl;
      }
   }
}
