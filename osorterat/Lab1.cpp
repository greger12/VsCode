#include <iostream>
using namespace std;
int main()
{

int tal, max, min, i, mean;

cin >> tal;
cout << tal << endl;

max = tal;
min = tal;
i = 1;
mean = tal;

while(1) {
    
    cin >> tal;

    if (cin.eof())
    break;

    if (tal > max) 
        max = tal;
    

    if (tal < min) 
        min = tal;
i ++;

mean = mean + tal;
cout << tal << endl;

}

cout << "Mean = " << static_cast<double>(mean) / i << endl;
cout << "Max = "  << max << endl;
cout << "Min = " << min << endl;




return 0;
}
