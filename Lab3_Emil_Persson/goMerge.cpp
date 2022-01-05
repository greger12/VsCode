#include <iostream>
#include <fstream>
using namespace std;

void goMerge(string fil1, string fil2, string fil3){
    ifstream myFileOne,myFileTwo;
    ofstream mergedFile;
    int tal1, tal2;
    myFileOne.open(fil1);
    myFileTwo.open(fil2);
    mergedFile.open(fil3);
    
    myFileOne >> tal1;
    myFileTwo >> tal2;

    while(myFileOne.eof() !=true && myFileTwo.eof() !=true){
        if(tal1 < tal2) {
            mergedFile << tal1 << " ";
            myFileOne >> tal1;
        }
        else {
            mergedFile << tal2 << " ";
            myFileTwo >> tal2;
        }
    }
    
    while(myFileOne.eof()!=true){
        mergedFile << tal1 << " ";
        myFileOne >> tal1;
    }
    
    while(myFileTwo.eof()!=true){
        mergedFile << tal2 << " ";
        myFileTwo >> tal2;

    }
    myFileOne.close();
    myFileTwo.close();
    mergedFile.close();
    }
