//
//  olpc14.hpp
//  Inner
//
//  Created by Hoang Viet on 12/08/2021.
//

#ifndef olpc14_hpp
#define olpc14_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class OlympicC2014{
public:
    OlympicC2014(){cout<<"created"<<endl;};
    void Kmin(string,string);
    void Rect(string,string);
    void Network(string,string);
    ~OlympicC2014(){cout<<"ended"<<endl;};
};
#endif /* olpc14_hpp */
