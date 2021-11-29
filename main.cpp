/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Smarsh Nicholas
 */

#include "std_lib_facilities.h"

// solves quadratic equation
double root_solver(double a, double b, double c)
{
  //initialize variables
  double root;

  //calculate root for quadratic formula
  root = pow(b, 2) - (4*a*c);
  
  
  //if root is not doable, then send message out
  if(root < 0) 
  {
    cout << "root is not possible\n";
    exit(1);
  }
  else
  {
    root = sqrt(root);
  }

  //print out square root
  cout << "the square root equals: " << root << "\n";
  return root;
}

int main() 
{
  //initialize variables
  double a,b,c;
  double root;
  double x1, x2;

  //ask for the 3 values of a, b, and c
  cout << "enter 'a' value then hit enter\n";
  cin >> a;
  cout << "enter 'b' value then hit enter\n";
  cin >> b;
  cout << "enter 'c' value then hit enter\n\n";
  cin >> c;

  //send vals to function
  root = root_solver(a, b, c);

  //now calculate the quadratic formula
  x1 = ((-1*b) + root) / (2*a);
  x2 = ((-1*b) - root) / (2*a);
  
  //print out x's or just 1 x if applicable
  if(x1 == x2)
  {
    cout << "X value equals: " << x1 << "\n";
  }
  cout << "X values equals: " << x1 << " or " << x2 << "\n";

  return 0;
}

//i know that my results are plausible because i verified if the math was correct, by doing the math on paper.

//yes, i can check if they are correct, by testing multiple a,b, and c variables that i already know the answer to from my scratch paper.