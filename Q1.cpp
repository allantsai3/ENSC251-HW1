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
#include <string>
using namespace std; 

//void calculateCost(int a, int b);
class ZipCode
{
public:
	ZipCode(int zipNumber); 
	// constructor for zip code input
	ZipCode(string barNumber); 
	// constructor for bar code input
		
		
		

		
private:
	void output() const; // does not change any member variables
	int convert(); //converts bar code to zip code
	int storedNumber;
		
};



int main()
{
	char typeConfirmation;
	int zipCodeNumber;
	string barCodeString;
	cout << "Are you entering a zip code number or a bar code string? Press z for zip code and b for bar code: ";
	cin >> typeConfirmation;
	
	if(typeConfirmation == 'z')
	{
		cout << "Enter a 5 digits zip code number: ";
		cin >> zipCodeNumber;
		ZipCode enteredValue(zipCodeNumber);
		
	}
	else if(typeConfirmation == 'b')
	{
		cout << "Enter a 25 digits bar code string: ";
		cin >> barCodeString;
		ZipCode enteredValue(barCodeString);
	}
	else
	{
		cout << "That is not one of the options!";
	}
	

	

	
	
	
}


	


/**
 * @brief ZipCode Class Constructor for integer input
 *
 * @param a is 
 * @param b is 
 * @return void
 *
 */

ZipCode::ZipCode(int zipNumber)
{
	if(zipNumber < 10000 || zipNumber > 99999)
	{
		cout << "You have entered an invalid zip code number!";
		exit(1);
	}
	
	storedNumber = zipNumber;
	
}


/**
 * @brief ZipCode Class Constructor for integer input
 *
 * @param a is 
 * @param b is 
 * @return void
 *
 */
ZipCode::ZipCode(string barNumber)
{
	if(barNumber.length() != 25)
	{
		cout << "You have entered an invalid bar code string!";
		exit(2);
	}
	
	
}

/**
 * @brief member function for displaying constant outputs
 *
 * @param a is 
 * @param b is 
 * @return void
 *
 */
 
 void ZipCode::output() const
 {

 }