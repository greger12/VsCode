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

while(getline(myFile,word)) {
             transform(word.begin(), word.end(), word.begin(),
            [](unsigned char c) -> unsigned char {return tolower(c); });
            outFile << word << endl;
            if(myFile.eof())
                break;
        }

myFileLow.open("Lower_Case.txt");



while(myFileLow >> word_low){
    word_low.erase(remove_if(word_low.begin(), word_low.end(),[](char c) {return !isalpha(c);} ), word_low.end());
++ word_count[word_low];

}

for(const auto &element : word_count)
    cout << element.first << " occurs " << element.second << " times" << endl;

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