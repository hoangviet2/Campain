//
//  main.cpp
//  DynamicPrograming
//
//  Created by Hoang Viet on 17/09/2021.
//

#include <iostream>
#include <stdio.h>
#include <vector>
#include "MyVector.hpp"
#include <numeric>
#include <algorithm>
vector<int> howSumBurto(int targetNum,vector<int> numbers){
    if(targetNum==0) return {};
    if(targetNum<0) return {-1};
    for(auto number:numbers){
        int remainder = targetNum - number;
        vector<int> remainderesult = howSumBurto(remainder, numbers);
        if(remainderesult.size()==0){
            remainderesult.push_back(number);
            return remainderesult;
        }
        if(remainderesult.size()>0 && remainderesult[0] != -1){
            remainderesult.push_back(number);
            return remainderesult;
        }
    }
    return {-1};
}

MyVector howSumMemo(int targetNum,vector<int> numbers){
    
    return MyVector({}, false);
}




int main()
{
    cout<<gcd(2.0,8);
    return 0;
}
