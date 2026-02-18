#include <iostream>

using namespace std;

int main()
{
    double lengthA, widthA;
    double lengthB, widthB;
     
    cout<<"Enter length and width of first rectange A: ";
    cin>>lengthA>>widthB;

    cout<<"Enter length and width of second rectangle B ";
    cin>>lengthA>>widthB;

      double AreaA = lengthA * widthB;
      double AreaB = lengthB * widthB;

    if( AreaA > AreaB )
    {
        cout<<"first rectangle A has a larger Area"<<endl;
    }
    else if ( AreaA < AreaB)
    {
        cout<<"second rectangle B have the same Area"<<endl;
    }
	
    return 0;
}

