#include <mpi.h>



#include <stdio.h>


int main(int argc, char *argv[]){
	MPI_Init(&argc, &argv);		/* Inilialize MPI */
	int myrank;
	int x=9,msgtag=0;
	MPI_Status status;
	
	MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
	if (myrank == 0){
		printf("Master: Sending 9 to Slave 1..\n");
		MPI_Send(&x, 1, MPI_INT, 1, msgtag, MPI_COMM_WORLD);
	}else if (myrank == 1){
		MPI_Recv(&x, 1, MPI_INT, 0, msgtag, MPI_COMM_WORLD, &status);
		printf("Slave 1: Received %d from Master\n", x);
	}
	


	MPI_Finalize();			/* Terminiate MPI */
}
