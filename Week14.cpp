// Erik Marquez
// eemxr9@mail.umkc.edu
// 5/2/19
// CS201L Lab 14


#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdexcept>
#include "Funcs.h"


using namespace std;



int main() {

	//Declarations!
	int integersArr[100];
	double dubsArr[100];
	string strArr[100];
	
	string search1 = "Shoes";
	string search2 = "Pumpkin";

	// Input Files
	ifstream fin ("integers.txt");
	ifstream fin2("doubles.txt");
	ifstream fin3("strings.txt");

	//Output Files
	ofstream fout("output.txt");

	//Read files
	readFile(fin, integersArr);
	readFile(fin2, dubsArr);
	readFile(fin3, strArr);

	//write files
	fout << "Integers:" << endl;
	outputFile(fout, integersArr,1,5);

	fout << "Doubles:" << endl;
	outputFile(fout, dubsArr, 4.62557, 1.23456);

	fout << "Strings:" << endl;
	outputFile(fout, strArr, search1, search2);



	return 0;

}