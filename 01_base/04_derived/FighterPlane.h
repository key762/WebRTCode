#ifndef __FIGHTERAIRPLANE_H__
#define __FIGHTERAIRPLANE_H__

#include <iostream>
#include "AirPlane.h"

namespace avdance {

class FighterPlane: public AirPlane {

	public:
	  FighterPlane(){
	    weapons = 1;
	  }
	
	  ~FighterPlane(){
	  
          }
	private:
	   int weapons;

	public:
	   void setWeapons(int w);
	   int getWeapons();

};

} // namespace

#endif // __FIGHTERAIRPLANE_H__

