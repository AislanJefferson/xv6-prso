#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
	
int main( int argc, char *argv[ ] ){
	//decodifica args
	int prio = atoi(argv[2]);
	
	//

	char* parametros[3];
	for (int i = 3; i < argc; i++)
	{	
		parametros[i - 3] = argv[i];
		printf(1, "%s\n", parametros[i-3]);
	}

	int pid = getpid();
	setpriority(pid, prio);
	exec(argv[3], parametros);
	exit();
}