#include <stdio.h>
#include <conio.h>
#include <math.h>

#define e 0.000001
#define f(x) x*x*x -2*x -5

int main() {
	
	float a = 2.0, b = 3.0, root;
	float f0, f1, f2;
	int i = 0;
	
	do{
		
		f0 = f(a);
		f1 = f(b);
		root = (a+b)/2;
		f2 = f(root);
		if(f0*f2 < 0)
		{
			b = root;
		}
		else
		{
			a = root;
		}
		i++;
		printf("Number of Iterations = %d, ", i);
		printf("Root = %f, ", root);
		printf("a = %f, b = %f, ", a, b);
		printf("Value of function = %f\n", f2);

	}while(fabs(f2) > e);
	
	getch();
	
	
	return 0;
}
