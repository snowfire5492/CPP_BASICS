/*
 * used for basic c++ code help
 * @author: Eric Schenck
 *
 *
 */

#include <iostream>
#include <climits>	// needed for min and max values must use limits.h
#include <iomanip> // needed for "fixed" and "scientific" float formating

using namespace std;

int main(){


	// output in c++
	cout << "Starting..." << flush; 	// flush forces system to output all text from buffer
										// without flush or endl , there is NO GAURANTEE that cout will print
	cout << "test" << " " << 5 << endl; // prints out instantly



	// input in c++
	//int age;
	//cout << "enter age: " << flush;
	//cin >> age;
	//cout << "you entered " << age << endl;



	//Variables in C++
	int numberCats = 5;
	double numberDogs = 3.2;
	float z = 3.2;
	bool y = true;
	char x = 'x';
	string name = "eric";
	string last = "schenck";
	cout << "name is " << name << endl;

	numberDogs -= 2;
	cout << numberDogs << flush;

	string fullName = name + " " + last;
	cout << fullName << endl;


	// size of int
	cout << "max value: " << INT_MAX << endl;
	cout << "mix value: " << INT_MIN << endl;

	//long int lvalue = 2345325345345;  			// should allow for bigger storage

	short int svalue = 23432;

	cout << svalue << endl;

	cout << "Size of int: " << sizeof(int) << endl;				// 4 bytes
	cout << "Size of short int: " << sizeof(short int) << endl; // 2 bytes
	cout << "size of long int: " << sizeof(long int) << endl; 	// 4 bytes

	//unsigned int uValue = 2343243;								// can be a bigger positive number using unsigned


	float fValue = 76.4;

	cout << fValue << endl;
	cout << fixed << fValue << endl;							// float output formating
	cout << scientific << fValue << endl;

	cout << setprecision(20) << fixed << fValue << endl;

	long double ldValue = 123.456789123466;
	cout << setprecision(20) << fixed << ldValue << endl;


	// boolean types

	bool bValue = true;
	cout << "bValue: " << bValue << endl;


	// char
	char cValue = 'C';
	cout << "cValue: " << cValue << endl;
	cout << "cValue ASCII: " << (int)cValue << endl;

	// wchar_t	// auto char ASCII value 

	wchar_t wValue = 'i';
	cout << "wValue Ascii: " << wValue << endl;
	cout << "wValue: " << (char)wValue << endl;



	return 0;
}
