#include "rileycrStarbucks.h"
#include "Node.h"
#include <iostream>
#include <fstream>

rileycrStarbucks::rileycrStarbucks(){
}

void rileycrStarbucks::build(Entry* c, int n){
	size = n;
	kdTreeRoot_ = new Entry();
	*kdTreeRoot_ = getMedianX(c);
	Node* rootNode_ = new Node(kdTreeRoot_, true);
	
	buildLeft(rootNode_);
	buildRight(rootNode_);
}

void rileycrStarbucks::buildLeft(Node* rootNode){
	if (rootNode -> leftChild_ = NULL){
		return;
	} else {
		buildLeft(rootNode -> leftChild_);
	}

}

Entry rileycrStarbucks::getMedianX(Entry* c){
	sortByX(c, 0, size);
	return c[size/2];
}

void rileycrStarbucks::sortByX(Entry* c, int start, int end){
	int i = start;
	int j = end;
	int pivotIndex = (start+end)/2;
	Entry temp;
	Entry pivot = c[pivotIndex];

	while(i <= j) {
		while(c[i].x < pivot.x)
			i++;
		while(c[j].x > pivot.x)
			j--;
		if(i <= j){
			temp = c[i];
			c[i] = c[j];
			c[j] = temp;
			i++;
			j--;
		}
	}
	if(start < j)
		sortByX(c, start, j);
	if(i < end)
		sortByX(c, i, end);
}

void rileycrStarbucks::sortByY(Entry* c, int start, int end){
	int i = start;
	int j = end;
	int pivotIndex = (start+end)/2;
	Entry temp;
	Entry pivot = c[pivotIndex];

	while(i <= j) {
		while(c[i].y < pivot.y)
			i++;
		while(c[j].y > pivot.y)
			j--;
		if(i <= j){
			temp = c[i];
			c[i] = c[j];
			c[j] = temp;
			i++;
			j--;
		}
	}
	if(start < j)
		sortByY(c, start, j);
	if(i < end)
		sortByY(c, i, end);
}

Entry* rileycrStarbucks::getNearest(double x, double y){
	Entry* nearest = new Entry();
	/*Entry temp = unsortedArrayData_[0];
	for(int i=0; i < size; i++){
		if(sqrt((unsortedArrayData_[i].x-x)*(unsortedArrayData_[i].x-x)+
			(unsortedArrayData_[i].y-y)*(unsortedArrayData_[i].y-y))
			< sqrt((temp.x-x)*(temp.x-x)+(temp.y-y)*(temp.y-y))) {
				temp = unsortedArrayData_[i];
		}
	}

	*nearest = temp;*/
	return nearest;
}