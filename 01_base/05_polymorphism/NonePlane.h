#ifndef __NONEAIRPLANE_H__
#define __NONEAIRPLANE_H__

#include <iostream>
#include "AirPlane.h"

namespace avdance {

class NonePlane: public AirPlane {

	public:
	  NonePlane(){
	    std::cout << "NonePlane construct..." << std::endl;
	    weapons = 1;
	  }
	
	  ~NonePlane(){
	    std::cout << "NonePlane destruct..." << std::endl;
          }
	private:
	   int weapons;

	public:
	   void setWeapons(int w);
	   int getWeapons();

	public:
	   virtual void fly(){
	   	std::cout << "NonePlane fly..." << std::endl;
           };
};

} // namespace

#endif // __NONEAIRPLANE_H__

