//House.cpp File for Complete Class Definition 
#include "House.h"
#include<iostream>
#include<string>

//Default Constructor
void House::getAll(string& adr, int& sq, int& rm, float& bth) {

	adr = streetAddress;
	sq = squareFootage;
	rm = numberOfBedrooms;
	bth = numberOfBathrooms;

}

//Constructor That Takes Four Parameters Using Constructor Initializer List Style
House::House(string address, int squareFoot, int bedRooms, float bathRooms) : streetAddress(address), squareFootage(squareFoot), numberOfBedrooms(bedRooms), numberOfBathrooms(bathRooms) {}

//Method to Set Square Footage
void House::setSquareFootage(const int s) {
	this->squareFootage = s;
}

//Method to Get Square Footage
int House::getSquareFootage()const{
	return squareFootage;
}

//Destructor
House::~House(){
	cout << "Destroying House with Square Footage: " << squareFootage << endl;
}

//testbed.cpp Source File 
#include "House.h"
#include<iostream>
#include<fstream>
#include<ostream>


using namespace std;

int main(){

	//Variable Declaration
	string adr;
	int sq;
	int rm;
	float bth;

	//Implicit Open of Write File to Store Information
	ofstream outFile("HouseOut.txt");


	//Three Instances of a House Object Printed to File
	House firstInstance;
	firstInstance.getAll(adr, sq, rm, bth);
	outFile << adr << sq << rm << bth;

	House secondInstance("Second Instance Address: 2134 Palmer Road", 4125);
	secondInstance.getAll(adr, sq, rm, bth);
	outFile << adr << sq << rm << bth;

	House thirdInstance("Third Instance Address: 44981 Savage Road", 2268, 6, 3.5);
	thirdInstance.getAll(adr, sq, rm, bth);
	outFile << adr << sq << rm << bth;

	//Array Declaration
	House houseList[10];

	//For Loop to Assign Houses in Array Different Square Footage
	for (int i = 0; i < 10; ++i) {

		//If to Assign Even Address Index Houses an Added 26 Square Feet Plus Index Number
		if (i % 2 == 0) {
			House temp("House Address", i + 26);
			houseList[i] = temp;
		}

		//Else to Assign Odd Addess Index Houses Square Footage 7 Times Their Index Number
		else{
			House temp("House Address", i * 7);
			houseList[i] = temp;
		}

	}

	//For and If Loop to Check and Display Houses Whose Square Footage Exceeds 31 Square Feet
	for (int i = 0; i < 10; ++i) {
		if (houseList[i].getSquareFootage() > 31) {
			houseList[i].getAll(adr, sq, rm, bth);
			cout << "House: " << adr << " has a Square Footage of " << sq << endl;
		}

	}

	return 0;

}
