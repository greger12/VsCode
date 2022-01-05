#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <cctype>
#include <string>

using namespace std;

int main () {
    ifstream myFile;
    myFile.open("Text1.txt");
    string str,myText;
    int i = 0;
    myFile >> str;
    str[i] = tolower(str[i]);
    cout << str[i];
    myFile >> str;
    

    while(myFile.eof()!=true){
        
        for(int i = 0;str[i]; i++){
        str[i] = tolower(str[i]);
        cout << str[i];
        myFile >> str;
    }
    }
    


    myFile.close();
    return 0;
}