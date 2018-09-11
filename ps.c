#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

	
int main(){
	int pid = getpid();
	
	printf(1,"%d\n", getpriority(pid));
	setpriority(pid, -4);
	printf(1,"%d\n", getpriority(pid));
	exit();
}