#include <iostream>
#include <fstream>
#include "is_sorted.h"
#include "goMerge.h"

using namespace std;

int main(){

    if(isSorted("A.txt") == 1){
    cout << "File sorted" << endl;
    }
    else{
    cout << "File not sorted" << endl;

    }
    if(isSorted("A1.txt") == 1){
    cout << "File sorted" << endl;
    }
    else{
    cout << "File not sorted" << endl;

    }
    
    if(isSorted("B.txt") == 1){
    cout << "File sorted" << endl;
    }
    else{
    cout << "File not sorted" << endl;

    }

    if(isSorted("A.txt") == 1 && isSorted("B.txt") == 1){
        goMerge("A1.txt","B.txt","Merge.txt");
        isSorted("Merge.txt");
        if(isSorted("Merge.txt")== 1){
        cout << "Merge sorted" << endl;
        }
        else{
        cout << "Merge not sorted" << endl;
        }
    } 

    
    
return 0;
}