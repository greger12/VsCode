#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <ctype.h>
#include <cctype>
#include <stdio.h>
#include <string>
#include <utility> 
#include <bits/stdc++.h>

using namespace std;


int main () {

string fil1;
ifstream myFile;
myFile.open("TextTV.txt");
getline(myFile, fil1);
char vector[fil1.length()+ 1];
strcpy(vector, fil1.c_str());
cout << "String Conversion to Character" << endl;
for(int i = 0; i < fil1.length();i++)



while(myFile.eof() != true){
    getline(myFile, fil1);
    cout << putchar(tolower(fil1))
    
    
}




    return 0;
}

    
  