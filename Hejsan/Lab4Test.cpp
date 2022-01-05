#include <vector>
#include <cctype>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;
int main(){
    vector<string> text;
    string myFile;
    ifstream inFile("Text1.txt");
    string a = "AsshoLE";
    
    while(getline(inFile,myFile))
        text.push_back(myFile);
        cout << "Text Size is: " << text.size() << endl;
    
    for(const auto element : text) {
        cout << element << endl;
    }
    transform()

   
    // std::transform(myText.begin(), a.end(),a.begin(), toupper );


    return 0;
}