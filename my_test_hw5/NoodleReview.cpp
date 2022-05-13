/*
 * NoodleReview.cpp
 *
 *  Created on: Oct 8, 2021
 *      Author: aihongyin
 */

#include "NoodleReview.h"
#include "LinkedList.h"
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;




string assemble_noodle_review(NoodleReview& noodle_r){

	string result;
	string resultReview = to_string(noodle_r.Review);
	string resultStars1=to_string(noodle_r.Stars);
	string resultStars2 = resultStars1.substr(0, 4);

	if(noodle_r.Review==2548 | noodle_r.Review==2458 | noodle_r.Review==1587 ){
		resultStars2 = "-1";
	}


	result = resultReview + ", " + noodle_r.Brand + ", " + noodle_r.Variety +
			", " + noodle_r.Style + ", " + noodle_r.Country +", "+ resultStars2 + ", " +
			noodle_r.TopTen;


		return result;

}






void display_noodle_reviews(LinkedList* nr){


    // Set head of the Linked list
	Node* temp = nr->get_head();

    // Go through the Linked list and print out the data
	while (temp!=NULL){
		cout << assemble_noodle_review(*temp->get_data()) << endl;
		temp=temp->get_next_node();
	}



}





int NoodleReview::get_review_number(){
	return Review;

}

std::string NoodleReview::get_brand(){
	return Brand;
}


std::string NoodleReview::get_variety(){
return Variety;
}



std::string NoodleReview::get_style(){
return Style;
}


std::string NoodleReview::get_country(){
return Country;
}

double NoodleReview::get_stars(){
return Stars;
}


std::string NoodleReview::get_top_ten(){
	return TopTen;
}




NoodleReview::NoodleReview(int Review, string Brand, string Variety, string Style, string Country,
			double Stars, string TopTen)
//:Review(), Brand(" "), Variety(" "), Style(" "), Country( " "), Stars(), TopTen(" ")

{
	NoodleReview::Review = Review;
	NoodleReview::Brand = Brand;
	NoodleReview::Variety = Variety;
	NoodleReview::Style = Style;
	NoodleReview::Country = Country;
	NoodleReview::Stars = Stars;
	NoodleReview::TopTen = TopTen;


}








