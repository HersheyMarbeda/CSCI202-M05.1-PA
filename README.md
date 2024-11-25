# CSCI 202: M05.1: Using Recursion

## Assignment Description
1. Ch 15: Exercise #1
  - a) Write a recursive function which takes a parameter of a nonnegative integer and generates a pattern of stars
  - b) Also, write a program that prompts the user to enter the number of lines in the pattern and uses the recursive function to generate the pattern.  Use at least three different test cases.
2.  Programming Exercise #14  Ch. 15 (p. 1082)
  - a) Write a recursive function to implement the recursive algorithm of Excercise 16 in the new book. (reverse the elements of an array between two indices).
  - b) Also write a program to test your function.

## My Methods
1. For exercise #1:
- This program generates a symmetrical star pattern using a recursive algorithm. The `generatePattern` function handles decreasing and increasing phases, stopping when the number of stars reaches zero. Initially, it prompts the user for the number of lines and validates the input, though this feature is currently commented out for testing. Test cases use fixed values to demonstrate functionality, producing clear and visually appealing star patterns. 
2. For exercise #14:
- This program reverses the elements within a specified range of an integer array using a recursive function called `void reverseArray(int Array[], int low, int high)`. It begins by validating the user's input for the low and high indices to ensure that the numbers are valid and within the appropriate range. The program then swaps the elements at these positions while recursively moving toward the center of the range. It provides clear outputs, displaying the original array, prompting the user for input (low and high), and showing the result of the reversed array.

