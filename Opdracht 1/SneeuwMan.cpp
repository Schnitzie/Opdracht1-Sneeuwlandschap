/*
 * SneeuwMan.cpp
 *
 *  Created on: 5 mrt. 2012
 *      Author: Jan
 */

#include "SneeuwMan.hpp"


//constructor, initiele x en y positie setten.
SneeuwMan::SneeuwMan(int positionX, int positionY) {
	this->positionX = positionX;
	this->positionY = positionY;
}


//Beweeg function van de sneeuwman. X positie + wijziging van de xpositie is de nieuw positie
void SneeuwMan::move(int direction) {
	this->positionX = this->positionX+direction;
}

//Teken functie van de sneeuwman. Word aangeroepen vanaf sneeuwlandschap class
void SneeuwMan::draw() {

	//kies kleur
	maSetColor( 0xebdbdbd );

	//teken sneeuwman romp
	maFillRect( this->positionX, this->positionY-30, 20, 30 );
	//teken sneeuwman hoofd
	maFillRect( this->positionX+4, this->positionY-42, 12, 12 );
}





