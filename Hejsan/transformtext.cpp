#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <utility>
#include <map>

using namespace std;

int main(){
    string s;
    ifstream myStream;
    ofstream out;
    myStream.open("Text1.txt");
    out.open("Lower_Case.txt");
    
    while(getline(myStream,s)) {
             transform(s.begin(), s.end(), s.begin(),
            [](unsigned char c) -> unsigned char {return tolower(c); });
            out << s << endl;
            
            

        }


   myStream.close();
   out.close();



    return 0;
}