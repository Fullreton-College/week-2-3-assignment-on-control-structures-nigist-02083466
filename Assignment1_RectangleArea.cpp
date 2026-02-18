#include <iostream>

using namespace std;

int main()
{
    double lengthA, widthA;
    double lengthB, widthB;
     
    cout << "Enter length and width of first rectangle A: ";
    cin >> lengthA >> widthA;

    cout << "Enter length and width of second rectangle B: ";
    cin >> lengthB >> widthB;

    double AreaA = lengthA * widthA;
    double AreaB = lengthB * widthB;

    if (AreaA > AreaB)
    {
        cout << "The 1st rectangle has the greater area" << endl;
    }
    else if (AreaA < AreaB)
    {
        cout << "The 2nd rectangle has the greater area" << endl;
    }
    else
    {
        cout << "The areas are the same" << endl;
    }
   
   
    return 0;
}

