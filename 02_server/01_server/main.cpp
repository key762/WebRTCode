/**
 * Server class
 * @author guochongling
 * @date 2022-06-05
 * @copyleft GPL 2.0
 */

#include <iostream>

#include "server.h"

using namespace avdance;

int main(int argc, char* argv[]){

    Server* server = new Server();
    if(server){
    	server->run();
    }
    return 0;
}
