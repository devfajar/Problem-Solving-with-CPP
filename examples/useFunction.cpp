// ***************************************
// This Program use three different function
// ***************************************

#include <iostream>
using namespace std;

int Square( int );
int Cube( int );

int main()
{
    cout << "The Square of 27 is " << Square(27) << endl;
    cout << "and the cube of 27 is " << Cube(27) << endl;
}

int Square( int n )
{
    return n * n;
}

int Cube( int n)
{
    return n * n * n;
}