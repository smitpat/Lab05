
 
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
 
using namespace std; 

const double PI = 3.14;

int main()
{
	ifstream inFile;
	ofstream outFile;

	double length, width;
        double radius;

    string firstName, lastName;
    int age;
    double beginningBalance, interestRate;

    
    
	inFile.open("inData.txt");
	outFile.open("outData.txt");

    outFile << fixed << showpoint << setprecision(2);

	inFile >> length >> width;
    outFile << "Rectangle: " << endl
            << "Length = " << length << ", width = " << width
            << ", area = " << length * width 
            << ", parameter = " << 2 * (length + width) << endl <<endl;
	
	inFile >> radius; 

    outFile << "Circle: " << endl
		    << "Radius = " << radius
		    << ", area = " << PI * radius * radius
            << ", circumference = " << 2 * PI * radius << endl << endl;

    inFile >> firstName >> lastName >> age;

    outFile << "Name: " << firstName << " " << lastName
            << ", age: " << age << endl;

    inFile >> beginningBalance >> interestRate;

    outFile << "Beginning balance = $" << beginningBalance
            << ", " << "Balance at the end of the month = $"
            << beginningBalance * (1 + interestRate / (12 * 100))
            << endl << endl;

   

    inFile.close();
    outFile.close();

	return 0;
}