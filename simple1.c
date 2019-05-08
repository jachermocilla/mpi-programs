#include <mpi.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	MPI_Init(&argc, &argv);		/* Inilialize MPI */

	/* Code goes here.*/

	MPI_Finalize();			/* Terminiate MPI */
}
