/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Spector Reese
*/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

//class Name_Value with Name (string) and Value (int)
class Name_value {
    public:
    
        //variables
        int value;
        string userName;
        
        //constructor
        Name_value(string str, int val): userName(str), value(val){}
};

int main(){

    //define variables
    vector<Name_value> nameList;
    string userName = "";
    int value = 0;
    
    cout << "Enter a name and number (Ex: Reese 10).\n" << 
    "To complete your submissions enter: NoName 0\n";
    
    //loop for user input until NoName 0 is input
    while (true) {
        cin >> userName >> value;
        
        if(userName == "NoName" && value== 0)
            break;
            
        //store user input
        for (int i = 0; i<nameList.size(); ++i)
            if (userName == nameList[i].userName) {
                cout << "userName is a duplicate - " << userName;
            }
        //insert new element 
        nameList.push_back( Name_value ( userName,value ) );
    }
        
    //print user inputs
    for (int i = 0; i<nameList.size(); ++i) {
        cout << "(" << nameList[i].userName << ',' << nameList[i].value << ") \n";
    }
}