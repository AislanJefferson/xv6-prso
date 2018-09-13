#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
	
int main(int argc, char *argv[ ]){
	int pid = getpid();
	//apagar linha seguinte
	printf(1,"qtd argc %d\n", argc);
	printf(1,"Li prioridade %d\n", getpriority(pid));
	printf(1,"Tento definir prioridade como -4 (invalida) e obtive: %d como resposta\n", setpriority(pid, -4));
	printf(1,"Lendo prioridade novamente, obtive: %d\n", getpriority(pid));
	printf(1,"Tento agora definir prioridade como 25 (valida) e obtive: %d como resposta\n", setpriority(pid, 25));
    printf(1,"Lendo prioridade novamente, obtive: %d\n", getpriority(pid));
	exit();
}