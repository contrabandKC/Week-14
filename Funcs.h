#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdexcept>


using namespace std;

//pre: enter an input file and Array
//Post; returns an array of the data. Templated file to handle string, int , double
template<typename T>
void readFile(ifstream & rFile, T arr[]) {

	//reads file and adds to array
	T temp;
	int i = 0;

	while (!rFile.eof()) {

		rFile >> temp;

		arr[i] = temp;

	
		i++;

	}

}


//pre: enter an  Array and positions to swap
//Post; returns an array with the positions swapped
template<typename T>
void mySwap(T arr[], int pos1, int pos2) {

	//swap code
	T temp;

	temp = arr[pos1];

	arr[pos1] = arr[pos2];

	arr[pos2] = temp;

}



//pre: enter Array
//Post; returns min value in array
template<typename T>
T myMin(T arr[]) {

	//declarations
	T min;

	min = arr[0];

	//search loop
	for (int i = 0; i < 100 ; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	return min;
}


//pre: enter Array
//Post; returns max value in array
template<typename T>
T myMax(T arr[]) {

	T max;

	//search loop
	max = arr[0];
		for (int i = 0; i < 100; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}

	return max;
}

//pre: enter Array and key
//Post; returns index of the kry
template<typename T>
int mySearch(T arr[], T key) {

	//search loop
	for (int i = 0; i < 100 ; i++)
	{
		if (arr[i] == key)
		{
		
			return i;
		}
	}

	return -1;
}


//pre: enter output file, Array, and 2 search items
//Post; output the data to the output file
template<typename T>
void outputFile(ofstream & rFile, T arr[], T search1, T search2) {

	//declar the two positions for the swap funcs

	int pos1 = 10;
	int pos2 = 20;


	//Main output
	rFile << "Swapped items at position 10 and 20" << endl;
	rFile << "Before: [10] "<< arr[10] <<" [20] " << arr[20]<< endl;
	mySwap(arr, 10, 20);
	rFile << "After: [10] " << arr[10] << " [20] " << arr[20] << endl;
	rFile << "Minimum: " << myMin(arr) << endl;
	rFile << "Maximum: " << myMax(arr) << endl;
	rFile << "The item: " << search1 << " is at position "<< mySearch(arr, search1) << endl;
	rFile << "The item: " << search2 << " is at position " << mySearch(arr, search2) << endl;
	rFile << endl;

	
}