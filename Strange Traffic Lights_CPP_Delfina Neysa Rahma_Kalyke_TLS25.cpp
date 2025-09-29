#include <iostream>
using namespace std;

int main()
{
    int t; 
    cin >> t;

   
    int phase = t % 3;

    switch (phase)
    {
    case 0:
        cout << "Red" << endl;
        break;
    case 1:
        cout << "Yellow" << endl;
        break;
    case 2:
        cout << "Green" << endl;
        break;
    }

    return 0;
}

