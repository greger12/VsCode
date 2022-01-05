#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <utility>
#include <fstream>
#include <vector>

using namespace std;

bool comp(pair<string,int>& a, pair < string, int>&b);
//bool sortbysec(const pair <string, int>&a, const pair <string,int>&b);

int main() {
vector<pair<string, int>> par1;
map<string, size_t> word_count;
string word,word_low, all;
ifstream myFile,myFileLow;
ofstream outFile;
int num;

myFile.open("hitchhikersguide.txt");
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

for(auto p:word_count){
    par1.push_back(p);
    
}
   //std::sort(par1.begin(), par1.end(), [](auto &left, auto &right) {
    //return left.second < right.second;
    
//});

//for(const auto &element : par1)
  //  cout << element.first << " occurs " << element.second << " times" << endl;

/*for(auto p:word_count){
    par1.push_back(p);
    
}*/



    

sort(par1.begin(), par1.end(),comp);
cout << "Enter " << "\""<< "N\""<< " if you want to see all words" << endl;
cin >> all;
if(all == "N" || all == "n"){
    for(const auto &element : par1)
    cout << element.first << " occurs " << element.second << " times" << endl;
}
else {
    cout << "How long do you want the list of top words to be?" << endl;
cin >> num;
cout << "Antal ord " << " " << num << endl;
}

for(int i = 0; i < num; i ++){
    cout << par1[i].first << ":" << par1[i].second << endl;
}


myFile.close();
outFile.close();
myFileLow.close();
    return 0;
}

bool comp(pair<string,int>& a, pair < string, int>&b){
    return a.second > b.second;
}
bool sortbysec(const pair <string, int>&a, const pair <string,int>&b){
    return a.second < b.second;
}