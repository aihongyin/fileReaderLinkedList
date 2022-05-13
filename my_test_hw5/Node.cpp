/*
 * node.cpp
 *
 *  Created on: Nov 4, 2021
 *      Author: aihongyin
 */

#include "Node.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "NoodleReview.h"
using namespace std;

Node::Node(){
	Node::noodlereview = nullptr;
	Node::next_node=nullptr;

}

// Parameterized Constructor
// This is to add data to the node
Node::Node(NoodleReview* nr)
   {
       this->noodlereview = nr;
       this->next_node = NULL;
   }


//assign a node for the "next_node" portion of the node
void Node::set_next_node(Node* new_node){

	if(new_node == NULL)
	       next_node = NULL;
	else
	       next_node = new_node;
}


//get the "next_node" of the current node
Node* Node::get_next_node(){
	return next_node;
}



//assign data for the data portion of the node
void Node::set_data(NoodleReview* nr){
	Node::noodlereview=nr;
}



//get data for the current node
NoodleReview* Node::get_data(){
	return noodlereview;
}


