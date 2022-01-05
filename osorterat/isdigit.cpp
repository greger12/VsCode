#include <cctype>
#include <iostream>
#include <istream>
#include <cstring>
using namespace std;

int main() {
char str[] = "349ejekdje93";
int check;


for (int i = 0; i < strlen(str); i++){
     check = isdigit(str[i]);
    if(check)
    cout << isdigit(str[i]) << endl;
}
    return 0;

}