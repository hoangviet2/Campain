//
//  oplc13.cpp
//  Inner
//
//  Created by Hoang Viet on 12/08/2021.
//

#include "oplc13.hpp"
void OlympicC2013::Node(string input, string output){
    cout<<"Node test run"<<endl;
    ifstream inp;
    ofstream oup;
    inp.open(input);
    oup.open(output);
    if(inp){
        
    }else{
        cout<<"Can't open file"<<endl;
    }
    inp.close();
    oup.close();
    cout<<"Node test out"<<endl;
    return;
}

void OlympicC2013::Oil(string input, string output){
    cout<<"Oil test run"<<endl;
    ifstream inp;
    ofstream oup;
    inp.open(input);
    oup.open(output);
    if(inp){
        int a,b,width;
        inp>>a;
        inp>>b;
        inp>>width;
        int largest = 0;
        vector<vector<int>> matrix;
        vector<int> largestInd;
        long int answer = 0;
        for(int i=0;i<a;++i){
            vector<int> tempvect;
            for(int j=0;j<b;++j){
                int temp;
                inp>>temp;
                largest = max(temp, largest);
                tempvect.push_back(temp);
            }
            matrix.push_back(tempvect);
        }
        for(int i=0;i<a-width;++i){
            for(int j=0;j<b-width;++j){
                
            }
        }
    }else{
        cout<<"Can't open file"<<endl;
    }
    inp.close();
    oup.close();
    cout<<"Oil test out"<<endl;
    return;
}

void OlympicC2013::Road(string input, string output){
    cout<<"Road test run"<<endl;
    
    cout<<"Road test out"<<endl;
    return;
}
