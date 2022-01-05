#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <utility>
#include <fstream>

using namespace std;

int main() {
map<string, size_t> word_count;
string word,word_low;
ifstream myFile,myFileLow;
ofstream outFile;
myFile.open("Text1.txt");
outFile.open("Lower_Case.txt");
//myFileLow.open("Lower_Case.txt");

while(myFile >> word){
for(auto & c : word){
    c = tolower(c);
    cout << word << endl;
}
}



while(myFile >> word){
++ word_count[word];
}

for(const auto &element : word_count)
    cout << element.first << " is found " << element.second << " times" << endl;

auto map_it = word_count.cbegin();

/*while(map_it != word_count.cend()) {
    
    cout << map_it ->first << " occursx "
    << map_it -> second << " timesx "<< endl;
    ++ map_it;
} */

myFile.close();
outFile.close();
myFileLow.close();
    return 0;
}