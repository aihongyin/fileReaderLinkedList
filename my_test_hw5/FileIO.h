/*
 * FileIO.h
 *
 *  Created on: Oct 13, 2021
 *      Author: aihongyin
 */

#ifndef FILEIO_H_
#define FILEIO_H_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "NoodleReview.h"
#include "LinkedList.h"
using namespace std;


class FileIO{

public:

	    //This is for the new version.
	    LinkedList* mylist = new LinkedList();

	    virtual LinkedList read_from_file(std::string file_name) = 0;

};



#endif /* FILEIO_H_ */
