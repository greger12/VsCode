#include <vector>
#include <iostream>
#include <fstream>
#include "is_sorted.h"
using namespace std;


void isSorted(string FileName){
    ifstream file;
    file.open(FileName);
    int tempNum, input;
    tempNum = 0;
    
    while(1){
        file >> input;
        if(file.eof()){
            cout << "Sorted" << endl;
            break;
            
        }
        if(input >= tempNum){
            tempNum = input;   
        }
        else{
            cout << "Not Sorted" << endl;
            break;
            
        }
    }
}
        
