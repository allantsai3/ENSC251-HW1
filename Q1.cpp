/**
 * @file Q1.cpp
 * @author Ming Lun (Allan) Tsai
 * @Date   9/22/2017
 * @version 1.0
 * @section DESCRIPTION 
 */
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others.  I acknowledged that I have read and
// following the Academic Honesty and Integrity related policies as
// outlined in the syllabus.
//
// _____ (Allan Tsai) ____      _____(9/20/2017)______________
//
// ____ (301314198) ______


#include <iostream>  
using namespace std; 

void calculateCost(int a, int b);
	
int main()
{
	calculateCost(1,2);
	cout << "Hello World!" <<  endl;
}

/**
 * @brief DESCRIPTION
 *
 * @param a is 
 * @param b is 
 * @return void
 *
 */
void calculateCost(int a, int b)
{
	double cost = 0;
 	cost = a + b;
	cout << "cost " << cost << endl;
}

