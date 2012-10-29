#include "rileycrStarbucks.h"
#include "Node.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	Entry* dataFile = new Entry[8000];
	ifstream in("Starbucks_2006.csv");

	for(int i = 0; i < 7655; i++){

		getline(in, dataFile[i].identifier, ',');

		in >> dataFile[i].x;
		in.get();

		in >> dataFile[i].y;
		in.get();

		//cout << dataFile[i].identifier << " " << dataFile[i].x << " " << dataFile[i].y << endl;
	}

	rileycrStarbucks* kdTree = new rileycrStarbucks();

	kdTree -> build(dataFile, 7655);

	//Entry* nearest = kdTree -> getNearest(.5,.5);
	//cout << nearest -> identifier << " " << nearest -> x << " " << nearest -> y << endl;
};