#include <iostream>
#include "data.hpp"
using namespace std;
int main(){
    Data target;
    target.menuShowing();
    target.test2();
    return 0;
}
void lab(){
    Data target;
    int choice;
    cout<<"Hi bro"<<endl;
    do{
        cout<<"In line ";
        cin>>choice;
        target.test2();
    } while (choice!=0);
    return;
}
