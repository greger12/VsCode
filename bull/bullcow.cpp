#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

int main(){
   vector<int> numberholder;
   int a, b, c, d, tot;
   
   srand(time(0));

   a = rand()%10;
   b = rand()%10;
   c = rand()%10;
   d = rand()%10;
   while(1){if(a == b || a == c || a == d || b == c || b == d || c == d){
   a = rand()%10;
   b = rand()%10;
   c = rand()%10;
   d = rand()%10;
    }
    else{
        cout << a << b << c  << d << endl;
        break;
    }

    }
    

   
    numberholder.push_back(a);
    numberholder.push_back(b);
    numberholder.push_back(c);
    numberholder.push_back(d);
    
    
    





    return 0;
}



