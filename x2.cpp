#include <iostream>
using namespace std;
int main()
{
   int x;
    cin >> x;
    if (100 >= x && x >= 90)
     {
        cout << 'A';
     }
     else if (90 >= x && x >= 80)
     {
        cout << 'B';
     }
     else if (80 >= x && x >= 70)
     {
        cout << 'C';
     } 
    else if (70 >= x && x >= 60)
     {
        cout << 'D';
     }
    else if (60 >= x && x >= 0)
     {
        cout << 'F';
     }
     else 
    {
        cout << "No value";
    }
    return 0;
}