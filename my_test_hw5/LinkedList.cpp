/*
 * linked_list.cpp
 *
 *  Created on: Nov 4, 2021
 *      Author: aihongyin
 */


#include "Node.h"
#include "NoodleReview.h"
#include "LinkedList.h"


	    Node* head;



	// Default constructor
	    LinkedList::LinkedList() {
	    	head = nullptr;
	    }


	   void LinkedList::set_head(){

		   Node* head = nullptr;
		   Node* newNode = new Node();


		   if (head == nullptr) {
		   	   head = newNode;
		                        }
	    }



	   Node* LinkedList::get_head(){
		   return head;

	   }

	   bool LinkedList::is_empty(){
		   return (head == NULL);
	   }



       // Add new node containing "nr" to the the end of the linked list
	   void LinkedList::add_data(NoodleReview* nr){


		   // This is to set the "newNode" with the data "nr"
		   Node* newNode = new Node(nr);

		   // This is to set the "newNode" to the head of the list
		   if(head==nullptr){

			   head = newNode;
			   return;

		   }

		          // If the head is not NULL
		          // Then, declare a temp node as the head, which is used to go through the list
			       Node* temp = head;

			       // Traverse till end of list
			       while (temp->Node::get_next_node() != NULL) {

			           // Update temp
			           temp = temp->Node::get_next_node();
			       }


			       // and add the "newNode" at the end of the linked list
			      temp->set_next_node(newNode);




	   }








