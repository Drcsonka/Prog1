#include <stdio.h>
#include <signal.h>

void jelkezelo (int signum) 
{ 
    printf("You pressed ctrl+c, but I don't care\n");
 }


int main()
{

	while(1)
	{
	if(signal(SIGINT, jelkezelo)==SIG_IGN)
	signal(SIGINT, SIG_IGN);
	}

	//if(signal(SIGINT, SIG_IGN) !=SIG_IGN)
	//	signal(SIGINT, jelkezelo);
	//printf("a\n" );
/*
	for(i=0; i<5; ++i)

	for(i=0; i<5; i++)

	for(i=0; i<5; tomb[i] = i++)

	for(i=0; i<n && (*d++ = *s++); ++i)

	printf("%d %d", f(a, ++a), f(++a, a));

	printf("%d %d", f(a), a);

	printf("%d %d", f(&a), a);
	
	*/
}