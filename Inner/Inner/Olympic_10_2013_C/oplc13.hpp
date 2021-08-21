//
//  oplc13.hpp
//  Inner
//
//  Created by Hoang Viet on 12/08/2021.
//

#ifndef oplc13_hpp
#define oplc13_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class OlympicC2013{
public:
    OlympicC2013(){cout<<"Begin test 2013 Gifted"<<endl;};
    void Node(string,string);
    void Oil(string,string);
    void Road(string,string);
    ~OlympicC2013(){cout<<"destroy"<<endl;};
};
#endif /* oplc13_hpp */
