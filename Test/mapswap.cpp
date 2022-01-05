#include <bits/stdc++.h>
using namespace std;



// Function to swap keys and values of a map
// and return a vector pair of the swapped values
template <typename K, typename V>
vector<pair<V, K> >
invertMap2(map<K, V> const& myMap)
{
  
    vector<pair<V, K> > myvec;
  
    // traverse the map
    // and pushback the values -> keys
    for (auto const& pair : myMap) {
        myvec.push_back(
            make_pair(pair.second,
                      pair.first));
    }
  
    return myvec;
}
  
// Function to call the swap operation
void swap(map<string, int> char_frequency)
{
  
    cout << "Original map:\n\n"
         << "KEY   Value\n";
    for (auto it
         = char_frequency.begin();
         it != char_frequency.end();
         ++it)
        cout << it->first << "   "
             << it->second << "\n";
  
    // create a vector pair of int, char
    // which store the swaped values
    vector<pair<int, string> > freq_char
        = invertMap2(char_frequency);
  
    // sort the vector pair to get
    // results similar to a map
    sort(freq_char.begin(),
         freq_char.end(),
         [](pair<int, string>& a,
            pair<int, string>& b) {
             if (a.first != b.first)
                 return a.first < b.first;
             return a.second < b.second;
         });
  
    cout << "\nMap with Keys and"
         << " Values swapped:\n\n"
         << "KEY   Value\n";
    for (auto it
         = freq_char.begin();
         it != freq_char.end();
         ++it)
        cout << it->first << "   "
             << it->second << "\n";
}









int main(){


map <string, int> word_count;
string word_low;
ifstream inFile;
ofstream outFile;

for (int i = 0; i < word_low.length(); ++i) {
        word_count[word_low[i]]++;
    }
  
    // Swap the keys with values of this map
    

inFile.open("dragon.txt");

while(inFile >> word_low){
word_low.erase(remove_if(word_low.begin(), word_low.end(),[](char c) {return !isalpha(c);} ), word_low.end());


}

for (int i = 0; i < word_low.length(); ++i) {
        word_count[word_low[i]]++;
    }
    swap(word_count);









    return 0;
}