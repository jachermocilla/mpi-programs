#include <mpi.h>
#include <stdio.h>

int master(){
	puts("Master\n");
}

int slave(){
	puts("Slave\n");
}


int main(int argc, char *argv[]){
	MPI_Init(&argc, &argv);		/* Inilialize MPI */
	int myrank;
	
	MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
	if (myrank == 0)
		master();
	else
		slave();
	


	MPI_Finalize();			/* Terminiate MPI */
}
