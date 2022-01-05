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
    map<string, size_t> word_count;
    string s, word;
    ifstream myStream;
    myStream.open("hitchhikersguide.txt");
    
    
            
    while(myStream >> s)
        ++word_count[word];

    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second << " times" << endl;
        
    auto map_it = word_count.cbegin();

    while (map_it != word_count.cend()){
                cout << map_it -> first << " occurs "
                << map_it-> second << " times" << endl;
                ++map_it;
            }

        


   



    return 0;
}