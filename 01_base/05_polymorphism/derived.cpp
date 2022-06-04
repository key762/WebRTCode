#include <iostream>
#include "AirPlane.h"
#include "NonePlane.h"
#include "FighterPlane.h"

using namespace avdance;

int main(int argc, char* argv[]){

	AirPlane* ap = new FighterPlane();
	if(ap){
	   ap->fly();
	}
	ap = new NonePlane();
	if(ap){
	   ap->fly();
	}
	ap = new AirPlane();
	if(ap){
	   ap->fly();
	}
	
}
