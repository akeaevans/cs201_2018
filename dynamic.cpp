// dynamic.cpp  INCOMPLETE
// Glenn G. Chappell
// 13 Apr 2018
//
// For CS 201 Spring 2018
// Dynamic Allocation

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// printThree
// Takes a pointer to an int array, which must have size at least 3 --
// or a null pointer. Prints the first three items in the array, or
// "NULL POINTER", if the passed pointer is null.
void printThree(int const * p)
{
    if (p == nullptr)
    {
        cout << "NULL POINTER" << endl;
    }
    else
    {
        cout << p[0] << " " << p[1] << " " << p[2] << endl;
    }
}


// Main Program
// Do some dynamic allocation. Call printThree multiple times.
int main()
{
    // Make a dynamic array of int, with size at least three. Set the
    // values of the first three items in the array.
    // Then call printThree, passing (a pointer to) the array.
    cout << "CHANGE THIS LINE!!!" << endl;
    cout << endl;

    // Call printThree with a null pointer.
    cout << "CHANGE THIS LINE!!!" << endl;
    cout << endl;

    // Deallocate the dynamic array.
    cout << "CHANGE THIS LINE!!!" << endl;
    cout << endl;

    // Wait for user
    cout << "Press ENTER to quit ";
    while (cin.get() != '\n') ;
}

