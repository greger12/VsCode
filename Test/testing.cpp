// C++ program to swap keys
// and values of a map
// using Vector pair
  
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
void swap(map<char, int> char_frequency)
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
    vector<pair<int, char> > freq_char
        = invertMap2(char_frequency);
  
    // sort the vector pair to get
    // results similar to a map
    sort(freq_char.begin(),
         freq_char.end(),
         [](pair<int, char>& a,
            pair<int, char>& b) {
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
  
// Driver code
int main()
{
  
    // Taking the frequency map of
    // GeeksforGeeks as the input map here
    string input = "geeksforgeeks";
    map<char, int> char_frequency;
    for (int i = 0; i < input.length(); ++i) {
        char_frequency[input[i]]++;
    }
  
    // Swap the keys with values of this map
    swap(char_frequency);
  
    return 0;
}