///////////////////////////////////////////////////////////////////////////////
//Header file for drone class												 //
//v1.0																		 //
//Changelog:																 //
//-First creation															 //
//Huseyin Emre Erdem														 //
//08.08.2014															     //
///////////////////////////////////////////////////////////////////////////////

#ifndef DRONE_H_INCLUDED
#define DRONE_H_INCLUDED

class Drone{
	public:
	float pos[2];//[X,Y] position
	float targetPos[2];//[X,Y] position
	float startingPos[2];//[X,Y] initial static position	
	bool isTargetFound;//0:Not found, search is active; 1:found
	bool isAtHome;//0:not at home, 1: at home	

	private:

	public:
	void takeOff(void);//Makes drone takeoff and initialize PTAM
	float[2] passingPoint(float pos[2], bool atHome);//provides the entry/exit point to/from home zone
	float[2] targetPos(char sensor[15]);//provides the next target position to move
	void turnTo(float pos[2]);//turns i90 towards the target position
	void goTo(float pos[2]);//moves i90 to the target position
	void searchPath();//calculates target position during the search for i90
	void patternRecognize();//provides the position of the center of the pattern if available

	private:

};

#endif

