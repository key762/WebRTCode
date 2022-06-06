#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void forkdef(){
       int fd;
       pid_t pid;
       if( (pid = fork()) < 0 ){
		std::cout << "can't create supercess!\n" << std::endl;
	}else{
		if(pid != 0){
			exit(0);
		}
	}
	setsid();
	if(chdir("/") < 0 ){
		std::cout << "can't change dir!\n" << std::endl;
		exit(-1);
	}
	fd = open("/dev/null", O_RDWR);
	dup2( fd, STDIN_FILENO );
	dup2( fd, STDOUT_FILENO );
	dup2( fd, STDERR_FILENO );
	return;
}

int main(int argc, char* argv[]){
	forkdef();
	while(1){
	  sleep(1);
	};
}
