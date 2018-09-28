#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "date.h"


//função rand() retorna um numero aleatório
unsigned long random = 1;
unsigned int rand() {
  	random = random * 1664525 + 1013904223 + random/132345;
  	return random;
}
	
void process(int i) {
  	int inicio = uptime();
	  
  	//processamento
  	long long j = 1e9;
  	long long  n = 0;  
  	while (j) {
	    n = n + rand();
	    j -= 1;
	  }

  	int fim = uptime();
  	printf(1, "Processo %d:  %d ticks\n", i, (fim - inicio));
	exit();
}

int main() {
	printf(1,"\nResultado esperado: \n");
	printf(1,"\nProcesso 4:  x ticks\n");
	printf(1,"Processo 3:  y ticks\n");
	printf(1,"Processo 2:  z ticks\n");
	printf(1,"Processo 1:  w ticks\n\n");

	if (fork()) {
    	setpriority(getpid(),30);
	    process(1);
  	} 
	if (fork()){
	  	setpriority(getpid(),20);
    	process(2);
  	}
	if (fork()){
  		setpriority(getpid(),10);
  		process(3);
  	}

	setpriority(getpid(),0);
	process(4);
}