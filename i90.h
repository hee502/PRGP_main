///////////////////////////////////////////////////////////////////////////////
//Header file for i90 class													 //
//v1.0																		 //
//Changelog:																 //
//-First creation															 //
//Huseyin Emre Erdem																	 //
//07.08.2014															     //
///////////////////////////////////////////////////////////////////////////////

/*
i90.readEncoder()
	Updates i90.leftEncoder and i90.rightEncoder values.
i90.passingPoint(i90.location, i90.atHome, i90.sensorInfo)
	Provides entry/exit position when going/leaving home.
i90.turnTo(i90.targetPos)
	Uses target position and current position to calculate angle to turn i90.
i90.goTo(i90.targetPos)
	Drives i90 towards the target position with PID.
i90.targetPos(i90.sensorInfo)
	Finds the new target location based on IR and ultrasonic sensor readings. The target has a limited distance and the distance can 		decrease in the presence of an obstacle.

*/

#ifndef I90_H_INCLUDED
#define I90_H_INCLUDED

class I90{//class used for i90
	public:
	float pos[2];//[X,Y] position
	float targetPos[2];//[X,Y] position
	int encoder[2];//[left,right]
	char serialData[8];//[sonar1,2,3,#ofMaxIR1,#ofMaxIR2,MaxIR1value,MaxIR2value,beaconFound]	
	float startingPos[2];//[X,Y] initial static position	
	bool isBeaconFound;//0:Not found, search is active; 1:found
	bool isAtHome;//0:not at home, 1: at home	

	private:

	public:
	float[2] passingPoint(void);//provides the entry/exit point to/from home zone
	float[2] targetPos(void);//provides the next target position to move
	void turnTo(void);//turns i90 towards the target position
	void goTo(void);//moves i90 to the target position	

	private:

};

#endif

