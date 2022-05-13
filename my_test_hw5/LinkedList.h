/*
 * linked_list.h
 *
 *  Created on: Nov 4, 2021
 *      Author: aihongyin
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "Node.h"


class NoodleReview;

class LinkedList{

private:
	Node* head;

public:

	 // Default constructor
	 LinkedList();
	 void set_head();
     Node* get_head();
     bool is_empty();
     void add_data(NoodleReview* nr);


};


#endif /* LINKEDLIST_H_ */
