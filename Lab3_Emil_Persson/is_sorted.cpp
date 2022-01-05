#include <iostream>
#include <fstream>
#include "is_sorted.h"
using namespace std;


bool isSorted(string FileName){
    ifstream file;
    file.open(FileName);
    int input,input_check;
    file >> input;
    
    while(file.eof()!=true){
        file >> input_check;
        if(input > input_check){
            
            return false;
              
        }
        input = input_check;

    }
    
        return true;
}