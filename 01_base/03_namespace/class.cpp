/**
 * this program for testing class and use it
 * @author guochongling
 * @date 2022-06-02
 * @copyleft GPL 2.0
 */

#include <iostream>

#include "Human.h"

using namespace avdance;

int main(int argc, char* argv[])
{
    Human* human = new Human();
    human->setAge(20);
    human->setSex(1);
    std::cout << "human:" << human->getAge() << ", " << human->getSex() << std::endl;
	     
}
