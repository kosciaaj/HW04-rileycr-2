class Node {
public:
	Node(Entry* root, bool xLevel);

	Entry* root_;
	Node* leftChild_;
	Node* rightChild_;
	bool isXLevel_;
};