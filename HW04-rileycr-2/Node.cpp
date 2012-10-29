#include "Node.h"
#include "rileycrStarbucks.h"

Node::Node(Entry* root, bool xLevel){
	root_ = root;
	isXLevel_ = xLevel;
}