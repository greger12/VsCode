#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <fstream>
#include <vector>

using namespace std;

bool Second(pair<string,int>& a, pair < string, int>&b);

int main() {
    vector<pair<string, int>> par1;
    map<string, size_t> word_count;
    string word,word_low, all;
    ifstream myFile,myFileLow;
    ofstream outFile;
    int num = 0;

    myFile.open("hitchhikersguide.txt");
    outFile.open("Lower_Case.txt");

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
        if(word_low.empty()) continue;
        ++ word_count[word_low];
    }

    for(auto p:word_count){
        par1.push_back(p);
    }

    sort(par1.begin(), par1.end(),Second);

    cout << "How long do you want the list of top words to be?" << endl;
    cin >> num;
    cout << "Top " << num << " words" << endl;
    
    for(int i = 0; i < num; i ++){
        cout << par1[i].first << ":" << par1[i].second << endl;
    }

    myFile.close();
    outFile.close();
    myFileLow.close();
    return 0;
}

bool Second(pair<string,int>& a, pair < string, int>&b){
    return a.second > b.second;
}
