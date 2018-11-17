/**
Course:  CS213 - Programming II  - 2018
Title:   Assignment 3 - Individual Task - problem 7, page 350( Programming Abstractions)
Program: CS213-2018-A3-V0
Purpose: Sum of digits using recursion
Author: Name :- Hanan Mohamed Abdelrahim ...... ID :- 20170375
Date:    3rd of November 2018
*/

#include <iostream>

using namespace std;

int digitalRoot(int n); //function prototype

int main()
{
cout<<"The digital root is "<<digitalRoot(73859985799);
}

int digitalRoot(int n)
{

    if(n < 10) //base case
    {
       return n;
    }

    n = digitalRoot(n/10) + n%10;  //recursive case

    if (n < 10){ //if sum reaches only 1 digit, return it as it is

        return n;
    }
 else // check the new number if it is still greater than 10, divide it and add the remainder to the remainder from the previous addition

 {
     return digitalRoot(n);
 }

}
