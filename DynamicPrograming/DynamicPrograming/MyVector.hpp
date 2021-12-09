//
//  MyVector.hpp
//  DynamicPrograming
//
//  Created by Hoang Viet on 21/09/2021.
//

#ifndef MyVector_hpp
#define MyVector_hpp

#include <stdio.h>
#include <vector>
using namespace std;
class MyVector{
private:
    vector<int> values;
    bool isValid;
public:
    MyVector(vector<int> value,bool state):values{value},isValid{state}{};
    vector<int> getValues(){return values;};
    bool getState(){return isValid;};
    ~MyVector(){};
};
#endif /* MyVector_hpp */
