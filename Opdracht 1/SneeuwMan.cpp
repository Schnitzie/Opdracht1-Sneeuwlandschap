/*
 * SneeuwMan.cpp
 *
 *  Created on: 5 mrt. 2012
 *      Author: Jan
 */

#include "SneeuwMan.hpp"


//constructor
SneeuwMan::SneeuwMan(int positionX, int positionY) {
	this->positionX = positionX;
	this->positionY = positionY;
}


void SneeuwMan::move(int direction) {
	this->positionX = this->positionX+direction;
}

void SneeuwMan::draw() {
	maSetColor( 0xebdbdbd );
	maFillRect( this->positionX, this->positionY-30, 20, 30 );
	maFillRect( this->positionX+4, this->positionY-42, 12, 12 );
}





