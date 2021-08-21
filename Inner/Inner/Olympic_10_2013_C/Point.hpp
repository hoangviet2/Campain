//
//  Point.hpp
//  Inner
//
//  Created by Hoang Viet on 16/08/2021.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Point{
private:
    int x,y;
    int total;
public:
    Point(int a,int b){x=a;y=b;};
    int cal(vector<int>);
};
#endif /* Point_hpp */
