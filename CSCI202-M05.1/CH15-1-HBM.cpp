/*
    Programming Assignment: Recursive
 
    Programmer Name:  Hershey Marbeda
    Instructor: Dr. Steve Carver
    Course: COSC 202: Data Structures and Algorithms
 
    Due: 11.25.2024
 
    Assignment Descriptition:
     1) Ch. 15 Programming Ex. 1 (p. 1080).
     
     a) Write a recursive function which takes a parameter of a nonnegative integer and generates a pattern of stars as shown below.  If the input number was 4 it would look like this.
     
     ****
     
     ***
     
     **
     
     *
     
     *
     
     **
     
     ***
     
     ****
     
     b) Also, write a program that prompts the user to enter the number of lines in the pattern and uses the recursive function to generate the pattern.  Use at least three different test cases.
 
 */

#include <iostream>

using namespace std;

// Function Prototype
void generatePattern(int num, int count = 0);


int main()
{
    // Table Heading
    cout << string(100, '-') << endl
         << "\t\t\t Program to Generate a Pattern of Stars\n"
         << string(100, '-') << endl;
    
    // Variable
    int lines = 0;
    
/*      User Prompt */
//    cout << "Enter the number of lines in the pattern : ";
//    cin >> lines;
//    
//    // Input Validation
//    while (lines < 0 || cin.fail())
//    {
//        cin.clear();
//        cin.ignore();
//        cout << "\nInvalid input. Please enter a nonnegative integer: ";
//        cin >> lines;
//    }
//    cout << "\nPattern of Stars when n = " << lines << ":" << endl;
//    generatePattern(lines);
    
    /*  Testing the Recursive Function with fixed num */
    lines = 3;
    cout << "\nPattern of Stars when n = " << lines << ":" << endl;
    generatePattern(lines);
    cout << endl;
   
    lines = 5;
    cout << "\nPattern of Stars when n = " << lines << ":" << endl;
    generatePattern(lines);
    cout << endl;
    
    lines = 10;
    cout << "\nPattern of Stars when n = " << lines << ":" << endl;
    generatePattern(lines);
    cout << endl;
    
    
    cout << endl << endl;
    return 0;
}

// Recursive Function
void generatePattern(int num, int count)
{
        // Base Case
    if (num <= 0) return;
    
        // Print stars for the decreasing phase
    for (int i = 0; i < num; i++)
    {
        cout << "*";
    }
    cout << endl;
    
    // Recursive Call
    generatePattern(num - 1, count + 1);
    
    // Print stars for mirroring the increasing phase
    for (int i = 0; i < num; i++)
    {
        cout << "*";
    }
    
    cout << endl;
}

