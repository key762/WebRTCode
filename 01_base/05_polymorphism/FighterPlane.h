#ifndef __FIGHTERAIRPLANE_H__
#define __FIGHTERAIRPLANE_H__

#include <iostream>
#include "AirPlane.h"

namespace avdance {

class FighterPlane: public AirPlane {

	public:
	  FighterPlane(){
	    std::cout << "FighterPlane construct..." << std::endl;
	    weapons = 1;
	  }
	
	  ~FighterPlane(){
	    std::cout << "FighterPlane destruct..." << std::endl;
          }
	private:
	   int weapons;

	public:
	   void setWeapons(int w);
	   int getWeapons();
	
	public:
	   virtual void fly(){
		std::cout << "FighterPlane fly..." << std::endl;
	   };
};

} // namespace

#endif // __FIGHTERAIRPLANE_H__

