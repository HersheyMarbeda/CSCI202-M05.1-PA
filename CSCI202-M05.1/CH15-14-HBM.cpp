/*
    Programming Assignmnet: Ch. 15 Programming Ex. 14 (p. 1082)-Recursive
 
    Programemr: Hershey Marbeda
    Instructor: Dr. Steve Carver
    Course: COSC 202: Data Structures and Algorithms
    
    Due Date: 11.25.2024
 
    Assignment Description:
    a) Write a recursive function to implement the recursive algorithm of Excercise 16 in the new book. (reverse the the elements of an array between two indices).
 
    b) Also write a program to test your function.
 
     Suppose intArray is an array of integers, and length is the number of elements in the array.
     
     Variable "low" and "high" are two integers such that 0<=low<length, 0 <= high < length and low < high. The variables low and high indicate two indices in the array.
     Implement a recursive algorithm which reverse the elements in intArray between low and high.
 */

#include <iostream>
using namespace std;

// Recursive Function
void reverseArray(int intArray[], int low, int high)
{
    // Base Case
    if (low >= high)
    {
        return;
    }
    
    // Swap the elements at low and high
    int temp = intArray[low];
    intArray[low] = intArray[high];
    intArray[high] = temp;
    
    // Recursive Call
    reverseArray(intArray, low + 1, high - 1);
}

int main()
{
    // Table Heading
    cout << string(100, '-') << endl
         << "\t\t\t\t\tProgram to Reverse Elements in an Array Between Two Indices\n"
         << string(100, '-') << endl;
    
    // Array
    int intArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(intArray) / sizeof(intArray[0]);
    
    // Print the original array
    cout << "Original Array: { ";
    for (int i = 0; i < length; i++)
    {
        cout << intArray[i] << " ";
    }
    cout << "}" << endl;
    
        // Input low and high indices
    int low, high;
    cout << "\nEnter low index (0 <= low < length): ";
    cin >> low;
    cout << "Enter high index (low < high < length): ";
    cin >> high;
    
    // Validate the indices
    if (low < 0 || high >= length || low >= high)
    {
        cout << "Invalid indices. Please ensure 0 <= low < length, 0 <= high < length, and low < high." << endl;
        return 1;
    }
    
    // Reverse the array between low and high indices
    reverseArray(intArray, low, high);
    
    // Print the modified array
    cout << "\nModified Array: ";
    for (int i = 0; i < length; i++)
    {
        cout << intArray[i] << " ";
    }
    cout << endl << endl << endl;
    return 0;
}

