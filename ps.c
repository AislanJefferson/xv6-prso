#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

	
int main(){
	int pid = getpid();;
	printf(1,"Li prioridade %d\n", getpriority(pid));
	printf(1,"Tento definir prioridade como -4 e obtive: %d como resposta\n", setpriority(pid, -4));
	printf(1,"Lendo prioridade novamente, obtive: %d\n", getpriority(pid));
	exit();
}
