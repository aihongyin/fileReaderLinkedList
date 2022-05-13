/*
 * node.h
 *
 *  Created on: Nov 4, 2021
 *      Author: aihongyin
 */

#ifndef NODE_H_
#define NODE_H_
class NoodleReview;


//This Node class mainly deal with a node
//While a linked list class will deal with the head and add additional nodes to the list
//using the Node class
class Node{

private:
	NoodleReview* noodlereview;
	Node* next_node;

public:
	Node();

	Node(NoodleReview* nr);

	void set_next_node(Node* new_node);
	Node* get_next_node();

	void set_data(NoodleReview* nr);
	NoodleReview* get_data();


};


#endif /* NODE_H_ */


