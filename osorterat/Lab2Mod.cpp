#include <iostream>
#include <fstream> 
using namespace std;
int main(){
string First_Name, Last_Name, Social_Security_Number,Postal_Code, City;
int gender;
ifstream myFile;
ofstream outFile;
myFile.open("names.txt");
outFile.open("sorterad.txt");

;



while(myFile.eof() != true){

    myFile >> First_Name >> Last_Name >> Social_Security_Number >> Postal_Code >> City;
    getline(myFile,City);
    gender = Social_Security_Number[8]%2;
    
    
    if(gender%2 == 1) {
        outFile << Last_Name  << ", " << First_Name << " [M]"<< endl;
        outFile << Postal_Code << City << endl;
    }

    else {
        outFile << Last_Name  << ", " << First_Name <<" [K]" << endl;
        outFile << Postal_Code << City << endl;   
        }
}

myFile.close();
outFile.close();


    return 0;
}