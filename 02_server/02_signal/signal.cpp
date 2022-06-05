#include <iostream>

#include <signal.h>
#include <unistd.h>

void sighandle(int sig){
	std::cout << "signal received : " <<
	sig <<
	std::endl;
}


int main(int argc, char* argv[]){
	signal(SIGINT, sighandle); // Ctl + C
	signal(SIGQUIT, sighandle); // Ctl + /
	signal(SIGHUP, sighandle); // 终端结束
	pause();
	return 0;
}
