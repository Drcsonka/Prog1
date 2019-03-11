#include <stdio.h>

int main()
{

	// Int 
	int a;

	// Pointer to int
	int *b = &a;

	// Int referencia
	int &r = a;

	// 5 elemes tomb 
	int c[5];

	// Tomb referencia 
	int (&tr)[5] = c;

	// Egészre mutató mutatok tombje
	int *d[5];

	//mutatot mutato visszaado fuggveny
	int *h ();

	//mutatót mutató visszaadó függvényre mutató függvény
	int *(*1) ();

	//egészet visszaadó és két egészet kapó függvényre mutató mutatót visszaado, egeszet kapo fuggveny
	int (*v ( int c)) (int a, int b)

	//fuggveny mutato egy egeszet visszaado es ket egeszet kapo fuggvenyre 
	//mutato mutatot visszaado, egeszet kapo fuggvényre
	int (*(*z) (int)) (int, int);


}
