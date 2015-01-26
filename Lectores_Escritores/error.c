#include <errno.h>
#include <stdio.h>
#include "error.h"

void validaLock(int e){
char * mensaje="\n\t-Se produjo el error";
	switch(e){

		case EINVAL:
			printf("%s EINVAL ( The value specified by mutex is invalid.)\n\n",mensaje);
		break;

		case EDEADLK:
			printf("%s EDEADLK (A deadlock would occur if the thread blocked waiting for mutex.)\n\n",mensaje);
		break;	

	}
}

void validaUnlock(int e){
char * mensaje="\n\t-Se produjo el error";
	switch(e){

		case EINVAL:
			printf("%s EINVAL (The value specified by mutex is invalid.) \n\n",mensaje);
		break;

		case EPERM:
			printf("%s EPERM (The current thread does not hold a lock on mutex.)\n\n",mensaje);
		break;	

	}
}


void validaCreate(int e){
	char * mensaje="\n\t-Se produjo el error";
	switch(e){

		case 0: 
			printf("\nHilo creado satisfactoriamente.\n");
		break;

		case EAGAIN:
			printf("%s EAGAIN (The system lacked the necessary resources to create another thread, or the system-imposed limit on the total number of threads in a process [PTHREAD_THREADS_MAX] would be exceeded.) \n\n",mensaje);
		break;

		case EINVAL:
			printf(" EINVAL (The value specified by attr is invalid.)\n\n");
		break;

	}
}

void validaJoin(int e){
	char * mensaje="\n\t-Se produjo el error";
	switch(e){

		case 0: 
			printf("Hilo recibido satisfactoriamente.\n\n");
		break;

		case EDEADLK:
			printf("%s EDEADLK (A deadlock was detected or the value of thread specifies the calling thread.) \n\n",mensaje);
		break;

		case EINVAL:
			printf("%s EINVAL (The implementation has detected that the value specified by thread does not refer to a joinable thread.)\n\n",mensaje);
		break;

		case ESRCH:
			printf("%s ESRCH (No thread could be found corresponding to that specified by the given thread ID, thread.)\n\n",mensaje);
		break;	

	}
}


void validaMutexDestroy(int e){

	char * mensaje="\n\t-Se produjo el error";
	switch(e){

		case 0: 
			printf("Semaforo destruido satisfactoriamente.\n\n");
		break;

		case EBUSY:
			printf("%s EBUSY (Mutex is locked by a thread.) \n\n",mensaje);
		break;

		case EINVAL:
			printf("%s EINVAL (The value specified by mutex is invalid.)\n\n",mensaje);
		break;

		default:
			//printf("\n\t-\nHilo captado satisfactoriamente\n\n");
		break;	
	}

}

void validaCondDestroy(int e){

	char * mensaje="\n\t-Se produjo el error";
	switch(e){

		case 0: 
			printf("Variable condicion destruida satisfactoriamente.\n\n");
		break;

		case EBUSY:
			printf("%s EBUSY (The variable cond is locked by another thread.) \n\n",mensaje);
		break;

		case EINVAL:
			printf("%s EINVAL (The value specified by cond is invalid.)\n\n",mensaje);
		break;

		default:
			//printf("\n\t-\nHilo captado satisfactoriamente\n\n");
		break;	
	}

}

void validaCondWait(int e){

char * mensaje="\n\t-Se produjo el error";
	
	switch(e){

		case EINVAL:
			printf("%s EINVAL ( The value specified by cond or the value specified by mutex is invalid.) \n\n",mensaje);
		break;	

	}		

}

void validaCondSignal(int e){

char * mensaje="\n\t-Se produjo el error";
	
	switch(e){

		case EINVAL:
				printf("%s EINVAL (The value specified by cond is invalid.) \n\n",mensaje);
		break;	


	}		

}

