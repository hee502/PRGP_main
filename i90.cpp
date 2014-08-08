///////////////////////////////////////////////////////////////////////////////
//Source file for i90 class													 //
//v1.0																		 //
//Changelog:																 //
//-First creation															 //
//Huseyin Emre Erdem														 //
//08.08.2014															     //
///////////////////////////////////////////////////////////////////////////////

#include i90.h

/*provides the entry/exit point to/from home zone
uses i90.pos, i90.isAtHome, i90.sensor
provides target position on two axes
should be used instaed of targetPos when entering/exiting home zone*/
float[2] I90::passingPoint(void){

}

/*provides the next target position to move
uses ultrasonic and ir sensor readings*/
float[2] I90::targetPos(void){

}

/*turns i90 towards the target position
uses position on two axes (targetPos/passingPoint)*/
void I90::turnTo(void){

}

/*moves i90 to the target position
uses position on two axes (targetPos/passingPoint)*/
void I90::goTo(void){

}

