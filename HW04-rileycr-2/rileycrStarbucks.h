#include "Starbucks.h"
#include "Node.h"

class rileycrStarbucks : public Starbucks {
public:
	rileycrStarbucks();
	void build(Entry* c, int n);
	Entry* getNearest(double x, double y);
	void buildLeft(Node* rootNode);
	void buildRight(Node* rootNode);
	Entry getMedianX(Entry* c);


	void sortByX(Entry* c, int start, int end);
	void sortByY(Entry* c, int start, int end);

	Entry* kdTreeRoot_;
	int size;
};