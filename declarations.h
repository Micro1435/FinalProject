//
//  declarations.h
//  FinalProject
//
//  Created by Michael Montella on 12/9/15.
//  Copyright © 2015 Michael Montella. All rights reserved.
//

#ifndef declarations_h
#define declarations_h

using namespace std;

class declarations {
public:
    void introduction();
    void reset();
    int transportNumber();
    int yearSelect();
 private:
    string year;
    string transport;
    string name;
    bool success;
    bool success2;
};

#endif /* declarations_h */
