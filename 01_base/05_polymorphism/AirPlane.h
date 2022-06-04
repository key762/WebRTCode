#ifndef __AIRPLANE_H__
#define __AIRPLANE_H__

#include <iostream>

namespace avdance {

class AirPlane {
    public:
	AirPlane() {
	    std::cout << "AirPlane construct..." << std::endl;
	    wings = 2;
	    wheels = 3;
	    engines = 1;	
	}
	~AirPlane() {
	     std::cout << "AirPlane destruct..." << std::endl;
	}

    public:
	void setWings(int w);
	int getWings();
	void setWheels(int w);
	int getWheels();
	void setEngines(int e);
	int getEngines();
    
    public:
	virtual void fly(); // 使用virtual关键字,说明是多态方法,需要子类实现,否则调用的是基类的方法
	
    private:
	int wings;
	int wheels;
	int engines;
	
};

} // namespace

#endif // __AIRPLANE_H__
