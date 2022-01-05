#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main() 
{
string word;
word = ("Hello this world213!.");

word.erase(remove(word.begin(), word.end(),'.'), word.end());
cout << word << endl;
            


    return 0;
}
