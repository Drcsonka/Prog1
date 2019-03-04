
//#include "std_lib_facilities.h"
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <omp.h>

int main()
{
	int i = 1;


	// 1 CPU mag 100%

 	/*
	while(i<10)
	{
    	printf("%d\n", i); 
	}
	*/


	// 0% infinite loop 
	/*
	while(i<10)
	{
    	printf("%d\n", i);
    	sleep(1);
	}
	*/



	// Egyszerre minden 100%

	#pragma omp parallel
	while(1)
	{}
	return 0;


	//Lefuttatas:

	//gcc infinite_loop.c -o infiniteki -fopenmp
	//.infiniteki
}