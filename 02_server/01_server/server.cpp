/**
 * Server class
 * @author guochongling
 * @date 2022-06-05
 * @copyleft GPL 2.0
 */

#include <iostream>
#include <unistd.h>

#include "server.h"

namespace avdance {

Server::Server(){
	std::cout << "construct..." << std::endl;
}

Server::~Server(){
	std::cout << "destruct..." << std::endl;
}

void Server::run(){
	while(1){
	    std::cout << "runing..." << std::endl;
	    ::usleep(1000000); // sleep one second
	}
}

} // namespace
