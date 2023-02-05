//Header File House.h for House Class
#pragma once
#include<string>
#include<iostream>

using namespace std;

//House Class 
class House{
private:
	//House Attributes
	string streetAddress;
	int squareFootage;
	int numberOfBedrooms;
	float numberOfBathrooms;

	//House Methods
public:
	//getAll() Method That Returns Four Arrtribute Values
	void getAll(string&, int&, int&, float&);

	//Default Constructor Written as Inline Defintion
	House(){streetAddress = "nowhere";	squareFootage = 0;	numberOfBedrooms = 0; numberOfBathrooms = 0;}

	//Second Constructor All Except First With Default Parameters
	House(string address, int = 0, int = 0, float = 0);

	//Destructor
	~House();

	//Method to Set Square Footage
	void setSquareFootage(const int);

	//Method to Get Square Footage
	int getSquareFootage()const;

};


