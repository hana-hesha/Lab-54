//File Name:Lab 53
//Author: Eng. Hana Hesham
//Version: 1
//purpose: a program in C++ to find the maximum number between two numbers using a pointer.
//Date: 8/12

#include <iostream>
using namespace std;

int main()
{
    int* ptr1, * ptr2, num1, num2;

    ptr1 = &num1;
    ptr2 = &num2;

    cout << "Enter number 1: ";
    cin >> *ptr1;

    cout << "Enter number 2: ";
    cin >> *ptr2;

    if (*ptr1 > *ptr2) {
        cout << "Number 1: " << *ptr1 << " is greater than number 2: " << *ptr2 << endl;
    }
    else if (*ptr2 > *ptr1) {
        cout << "Number 2: " << *ptr2 << " is greater than number 1: " << *ptr1 << endl;
    }
    else {
        cout << "Both numbers are equal: " << *ptr1 << endl;
    }

    return 0;
}
