/*
 * my_test.cpp
 *
 *  Created on: Oct 8, 2021
 *      Author: aihongyin
 */




#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "NoodleReview.h"
#include "IoRunner.h"
#include "LinkedList.h"
#include "Node.h"

using namespace std;

//This is the data file
std::string DATA_FILE_NAME = "ramen-ratings.csv";



int main() {


     LinkedList thisList;
	 NoodleReview *noodleObject = new NoodleReview(0, " ", " ", " ", " ", 0, " ");
     IoRunner myReader;



     //Read the given file
     thisList = myReader.read_from_file(DATA_FILE_NAME);

     assemble_noodle_review(*noodleObject);


     display_noodle_reviews(&thisList);


     std::string my_new_file = "myFile.txt";
     //This the the "write to file"
     myReader.write_to_file(my_new_file, thisList);


return 0;

}
